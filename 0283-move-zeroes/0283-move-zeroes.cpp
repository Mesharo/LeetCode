class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;
        for (int current = 0; current < nums.size(); current++)  {
            if (nums[current] != 0)  {
                swap(nums[index], nums[current]);
                index++;
            }
        }
    }
};
