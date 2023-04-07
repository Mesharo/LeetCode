class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        
        // -- Credit to archit91 for this part.
        for (auto number : nums)  {
            while (number != nums[number - 1])  {
                swap(number, nums[number - 1]);
            }
        }
        // --
        
        for (int current = 1; current <= nums.size(); current++)  {
            if (current != nums[current - 1])  {
                result.push_back(current);
            }
        }
        
        return result;
    }
};