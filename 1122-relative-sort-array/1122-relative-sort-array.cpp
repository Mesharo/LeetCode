class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> myMap;
        vector<int> notIn;
        
        for (auto i : arr1)  {
            if (myMap.find(i) != myMap.end())  {
                myMap[i]++;
            } else  {
                if (find(arr2.begin(), arr2.end(), i) == arr2.end())  {
                    notIn.push_back(i);
                }
                myMap[i] = 1;
            }
        }
        
        sort(notIn.begin(), notIn.end());
        arr2.insert(arr2.end(), notIn.begin(), notIn.end());
                
        int index = 0;
        for (auto i : arr2)  {
            while (myMap[i] != 0)  {
                arr1[index] = i;
                myMap[i]--; index++;
            }
        }
                
        return arr1;
    }
};