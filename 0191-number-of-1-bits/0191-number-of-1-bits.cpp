class Solution {
public:
    int hammingWeight(uint32_t n) {
        int sum = 0;
        
        while (n != 0)  {
            if ((n % 2) == 0)  {
                n = n >> 1;
                continue;
            }
            sum++; n = n >> 1;
        }
        
        return sum;
    }
};