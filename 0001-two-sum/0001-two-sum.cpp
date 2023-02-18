#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> myMap;
        for (int current = 0; current < nums.size(); current++)  {
            if (myMap.find((target - nums[current])) == myMap.end())  {
                myMap[nums[current]] = current;
                continue;
            }
            
            return {myMap[target - nums[current]], current};
        }
        
        return {NULL, NULL};
    }
};