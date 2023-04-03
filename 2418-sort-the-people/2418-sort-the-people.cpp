class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int,string> myMap;
        
        for (auto i = 0; i < names.size(); i++)  {
            myMap[heights[i]] = names[i];
        }
        
        sort(heights.rbegin(), heights.rend());
        
        for (auto i = 0; i < heights.size(); i++)  {
            names[i] = myMap[heights[i]];  
        }
        
        return names;
    }
};

//