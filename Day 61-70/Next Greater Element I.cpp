#include <vector>
#include <unordered_map>
#include <stack>

class Solution {
public:
    std::vector<int> nextGreaterElement(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::vector<int> result;
        std::unordered_map<int, int> nextGreater;
        std::stack<int> stack;

        for (int num : nums2) {
            while (!stack.empty() && num > stack.top()) {
                nextGreater[stack.top()] = num;
                stack.pop();
            }
            stack.push(num);
        }

        for (int num : nums1) {
            result.push_back(nextGreater.count(num) ? nextGreater[num] : -1);
        }

        return result;
    }
};
