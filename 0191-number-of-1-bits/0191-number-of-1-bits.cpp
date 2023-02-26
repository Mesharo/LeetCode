class Solution {
public:
    int hammingWeight(uint32_t n) {
        int sum = 0;
        
        while (n != 0)  {
            if ((n & 1) == true)  {
                sum++;
            }
            n = n >> 1;
        }
        
        return sum;
    }
};

/*
    Simple approach:
    
    int sum = 0;
    for (int current = 0; current < 32; current++)  {
        if ((n % 2) == 1)  {
            sum++;
        }
        n = n >> 1;
    }
*/