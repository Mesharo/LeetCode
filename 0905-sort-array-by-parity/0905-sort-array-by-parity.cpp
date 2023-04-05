class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int first = 0, last = nums.size() - 1;   
        while (first < last)  {
            if (!(nums[first] & 1))  {
                first++; continue;
            }
            
            if (!(nums[last] & 1))  {
                swap(nums[first], nums[last]);
                first++;
            }
            last--;            
        }
            
        return nums;
    }
};