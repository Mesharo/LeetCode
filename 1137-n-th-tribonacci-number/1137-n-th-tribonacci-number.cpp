class Solution {
public:
    int tribonacci(int n) {
        int first = 0; int second = 1; int third = 1;
        
        for (auto x = 3; x < (n + 1); x++)  {
            int temp = first + second + third;
            first = second;
            second = third;
            third = temp;
        }
    
        return (n == 0) ? first : third;
    }
};