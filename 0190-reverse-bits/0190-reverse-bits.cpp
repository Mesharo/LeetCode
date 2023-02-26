#include <bitset>

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> myBitset;
        int current = 31;
        
        while (n != 0)  {
            if ((n & 1) == true)  {
                myBitset.flip(current);
            }
            current--; n = n >> 1;
        }
        
        return myBitset.to_ulong();
    }
};