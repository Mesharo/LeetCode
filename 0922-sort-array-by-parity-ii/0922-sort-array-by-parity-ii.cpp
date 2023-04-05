class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
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
        
        int i = 1, j = nums.size() - 2;
        while (i < j)  {
            swap(nums[i], nums[j]);
            i += 2; j -= 2;
        }
            
        return nums;
    }
};