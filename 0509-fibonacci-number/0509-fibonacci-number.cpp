class Solution {
public:
    int fib(int n) {  
        int first = 0; int second = 1;
        
        for (auto x = 2; x < (n+1); x++)  {
            int temp = first + second;
            first = second;
            second = temp;
        }
        
        return (n == 0) ? first : second;
    }
};