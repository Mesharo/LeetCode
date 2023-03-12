#include <unordered_map>

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char, vector<vector<int>>> myMap;
    
        for (int x = 0; x < 9; x++)  {
            for (int y = 0; y < 9; y++)  {
                
                if (board[x][y] == '.')  {
                    continue;
                }
                
                int subbox = (x / 3) * 3 + (y / 3);
                
                if (myMap.find(board[x][y]) == myMap.end())  {
                    myMap[board[x][y]] = {{x, y, subbox}};
                } else  {
                    for (auto current : myMap[board[x][y]])  {
                        if ((current[0] == x) || (current[1] == y) || (current[2] == subbox))  {
                            return false;
                        }
                    }
                    myMap[board[x][y]].push_back({x, y, subbox});
                }
            }
        }
        
        return true;
    }
};
