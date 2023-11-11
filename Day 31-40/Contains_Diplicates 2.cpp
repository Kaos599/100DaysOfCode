#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        std::unordered_set<int> numSet;

        for (int i = 0; i < nums.size(); ++i) {
           
            if (numSet.find(nums[i]) != numSet.end()) {
                return true;
            }

            numSet.insert(nums[i]);

           
            if (numSet.size() > k) {
                numSet.erase(nums[i - k]);
            }
        }

        return false;
    }
};
