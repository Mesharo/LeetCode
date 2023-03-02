#include <unordered_map>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> myMap;
        for (int current = 0; current < nums.size(); current++)  {
            if (myMap.find(nums[current]) == myMap.end())  {
                myMap[nums[current]] = 1;
                continue;
            }
            return true;
        }
        
        return false;
    } 
};