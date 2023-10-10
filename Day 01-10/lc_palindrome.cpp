#include <vector>
#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
        string k = to_string(x);
        vector<char> g; 

        for (int i = k.size() - 1; i >= 0; i--) { 
            g.push_back(k[i]); 
        }

        string str1(g.begin(), g.end());

        return str1 == k; 
    }
};
