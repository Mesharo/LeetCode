#include <cstdlib>

class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long sum = 0;
        int i = 0; int j = nums.size() - 1;
        
        while (i < j)  {
            sum += stoll((to_string(nums[i]) + to_string(nums[j])));
            i++; j--;
        }
        
        if (i == j)  {
            return (sum + nums[i]);
        }
        
        return sum;
    }
};

/*
// erasing begin is O(n), combined with to_string()? bad bad
    long long findTheArrayConcVal(vector<int>& nums) {
        long long sum = 0;
        
        while (!nums.empty())  {
            if (nums.size() == 1)  {
                return (sum + nums.front());
            }
            sum += stoll((to_string(nums.front()) + to_string(nums.back())));
            nums.erase(nums.begin()); nums.pop_back();
        }
        
        return sum;
    }
*/