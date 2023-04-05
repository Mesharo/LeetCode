class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        
        for (auto current = 0; current < nums.size(); current++)  {
            if (current & 1)  {
                odd.push_back(nums[current]);
            } else  {
                even.push_back(nums[current]);
            }
        }
        
        sort(even.begin(), even.end());
        sort(odd.rbegin(), odd.rend());
        
        for (auto current = 0; current < nums.size(); current++)  {
            if (current & 1)  {
                nums[current] = odd[current / 2];
            } else  {
                nums[current] = even[current / 2];
            }
        }
        
        return nums;
    }
};