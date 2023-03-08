class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for (int current = 0; current < matrix.size(); current++)  {
            reverse(matrix[current].begin(), matrix[current].end());
        }
        
        for (int i = 0; i < matrix.size(); i++)  {
            for (int j = 0; j < matrix.size() - i; j++)  {     
                swap(matrix[i][j], matrix[matrix.size() - 1 - j][matrix.size() - 1 - i]);              
            }
        }
    }
};