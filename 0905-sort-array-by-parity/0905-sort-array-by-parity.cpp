class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int first = 0, last = nums.size() - 1;   
        while (first < last)  {
            // If first is even, skip
            if (!(nums[first] & 1))  {
                first++; continue;
            }
            
            // If last is even, swap with odd first
            if (!(nums[last] & 1))  {
                swap(nums[first], nums[last]);
                first++;
            }
            last--;            
        }
            
        return nums;
    }
};