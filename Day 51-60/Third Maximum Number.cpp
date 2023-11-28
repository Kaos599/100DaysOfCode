#include <vector>
#include <set>

class Solution {
public:
    int thirdMax(std::vector<int>& nums) {
        std::set<int> uniqueNums;

        for (int num : nums) {
            uniqueNums.insert(num);
            if (uniqueNums.size() > 3) {
                uniqueNums.erase(uniqueNums.begin());
            }
        }

        return uniqueNums.size() == 3 ? *uniqueNums.begin() : *uniqueNums.rbegin();
    }
};
