#include <vector>

class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int n = nums.size();
        
        int expectedSum = n * (n + 1) / 2;
        
        
        int actualSum = 0;
        for (int num : nums) {
            actualSum += num;
        }
        
    
        return expectedSum - actualSum;
    }
};
