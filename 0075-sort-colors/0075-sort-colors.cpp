class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count[3] = {0, 0, 0};
        for (auto i : nums)  {
            count[i]++;
        }
        
        auto index = 0;
        for (auto i = 0; i < 3; i++)  {
            while (count[i] != 0)  {
                nums[index] = i;
                count[i]--; index++;
            }
        }
    }
};