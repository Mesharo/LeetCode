class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> solution;
        for (int first = 0; first < (nums.size() - 1); first++)  {
            for (int second = first + 1; second < nums.size(); second++)  {
                if ((nums[first] + nums[second]) == target)  {
                    solution.push_back(first);
                    solution.push_back(second);
                    break;
                }
            }
        }
        return solution;
    }
};