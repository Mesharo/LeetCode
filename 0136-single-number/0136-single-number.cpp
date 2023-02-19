class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = nums[0];
        for (int current = 1; current < nums.size(); current++)  {
            result ^= nums[current]; 
        }
        return result;
    }
};