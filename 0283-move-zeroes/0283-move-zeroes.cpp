class Solution {
public:
    void mySwap(vector<int>& nums, int i, int j)  {
        int whatever = nums[i];
        nums[i] = nums[j];
        nums[j] = whatever;
    }
    
    void moveZeroes(vector<int>& nums) {
        int index = 0;
        for (int current = 0; current < nums.size(); current++)  {
            if (nums[current] != 0)  {
                mySwap(nums, index, current);
                index++;
            }
        }
    }
};

