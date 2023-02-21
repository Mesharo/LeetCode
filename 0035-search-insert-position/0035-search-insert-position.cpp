class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0; int j = nums.size() - 1;
        while (i <= j)  {
            if (nums[((i + j) / 2)] == target)  {
                return ((i + j) / 2);
            } else if (nums[((i + j) / 2)] > target)  {
                j = ((i + j) / 2) - 1;
                continue;
            } else  {
                i = ((i + j) / 2) + 1;
            }
        }
        return i;
    }
};