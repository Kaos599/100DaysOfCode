#include <vector>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int nonZeroPos = 0;

        // Iterate through the array
        for (int i = 0; i < nums.size(); ++i) {
            // If the current element is non-zero, swap it with the element at nonZeroPos
            if (nums[i] != 0) {
                std::swap(nums[i], nums[nonZeroPos]);
                nonZeroPos++;
            }
        }
    }
};
