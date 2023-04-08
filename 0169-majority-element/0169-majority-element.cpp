class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> myMap;
        
        for (auto number : nums)  {
            if (myMap.find(number) != myMap.end())  {
                myMap[number]++; continue;
            }
            myMap[number] = 1;
        }
        
        for (auto value : myMap)  {
            if (value.second > (nums.size() / 2))  {
                return value.first;
            }
        }
        
        return -1000000001;
    }
};