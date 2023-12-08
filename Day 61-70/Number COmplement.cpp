#include <cstdint>

class Solution {
public:
    int findComplement(int num) {
        
        int numBits = 0;
        int temp = num;
        while (temp > 0) {
            numBits++;
            temp >>= 1;
        }

        
        uint64_t bitmask = (1ULL << numBits) - 1;

       
        return num ^ static_cast<int>(bitmask);
    }
};
