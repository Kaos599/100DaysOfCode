#include <iostream>
#include <algorithm>

class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.length();

        for (int i = 0; i < n; i += 2 * k) {
            // Calculate the end index for each segment
            int end = min(i + k, n);

            // Reverse the first k characters in the current segment
            reverse(s.begin() + i, s.begin() + end);
        }

        return s;
    }
};
