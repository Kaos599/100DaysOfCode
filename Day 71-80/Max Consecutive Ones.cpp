#include <vector>

class Solution {
public:
    int findMaxConsecutiveOnes(std::vector<int>& nums) {
        int maxConsecutiveOnes = 0;
        int currentConsecutiveOnes = 0;

        for (int num : nums) {
            if (num == 1) {
                currentConsecutiveOnes++;
                maxConsecutiveOnes = std::max(maxConsecutiveOnes, currentConsecutiveOnes);
            } else {
                currentConsecutiveOnes = 0;  
            }
        }

        return maxConsecutiveOnes;
    }
};
