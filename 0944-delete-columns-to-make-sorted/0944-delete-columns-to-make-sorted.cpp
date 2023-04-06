class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int result = 0;
        for (int column = 0; column < strs[0].length(); column++)  {
            int first = strs[0][column];
            for (int current = 1; current < strs.size(); current++)  {
                if (strs[current][column] < first)  {
                    result++;
                    break;
                }
                first = strs[current][column];
            }
        }
        return result;
    }
};

//