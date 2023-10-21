class Solution {
public:
    int strStr(string haystack, string needle) {
        int hay_len = haystack.length();
        int needle_len = needle.length();
        
        if (needle_len == 0) {
            return 0; 
        }
        
        if (needle_len > hay_len) {
            return -1; 
        }

        for (int i = 0; i <= hay_len - needle_len; ++i) {
            if (haystack.substr(i, needle_len) == needle) {
                return i; 
            }
        }
        
        return -1;
    }
};
