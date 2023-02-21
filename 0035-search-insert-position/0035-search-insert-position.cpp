class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0; int j = nums.size() - 1;
        while (i <= j)  {
            int current = (i + j) / 2;
            if (nums[current] == target)  {
                return current;
            } else if (nums[current] > target)  {
                j = current - 1;
                continue;
            } else  {
                i = current + 1;
            }
        }
        return i;
    }
};