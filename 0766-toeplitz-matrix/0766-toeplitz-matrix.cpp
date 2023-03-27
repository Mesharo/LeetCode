class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for (auto x = 0; x < matrix.size(); x++)  {
            for (auto y = 0; y < matrix[x].size(); y++)  {
                if (x == 0 || y == 0) {
                    continue;
                }
                
                if (matrix[x][y] != matrix[x - 1][y - 1])  {
                    return false;   
                }
            }
        }
        return true;
    }
};