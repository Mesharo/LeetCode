class Solution {
public:
    int climbStairs(int n) {
        if (n <= 3)  {
            return n;  
        }
        
        int first = 2; int second = 3;
        
        for (auto x = 4; x < (n+1); x++)  {
            int temp = first + second;
            first = second;
            second = temp;
        }
        
        return second;
    }
};