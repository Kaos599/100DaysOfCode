#include <vector>
#include <unordered_set>

class Solution {
public:
    int findFinalValue(std::vector<int>& nums, int original) {
        std::unordered_set<int> numSet(nums.begin(), nums.end());

        while (numSet.count(original)) {
            original *= 2;
        }

        return original;
    }
};
