#include <cstdlib>

class Solution {
public:
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
};