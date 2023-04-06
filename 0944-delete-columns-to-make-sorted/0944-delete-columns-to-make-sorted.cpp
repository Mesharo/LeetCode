class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int result = 0;
        for (int column = 0; column < strs[0].length(); column++)  {
            for (int current = 0; current < strs.size() - 1; current++)  {
                if (strs[current][column] > strs[current + 1][column])  {
                    result++;
                    break;
                }
            }
        }
        return result;
    }
};