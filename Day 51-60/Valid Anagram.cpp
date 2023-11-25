#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
     
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> freqS;
        unordered_map<char, int> freqT;

        for (char c : s) {
            freqS[c]++;
        }

   
        for (char c : t) {
            freqT[c]++;
        }

       
        for (auto& entry : freqS) {
            char c = entry.first;
            int countS = entry.second;
            int countT = freqT[c];

          
            if (countS != countT) {
                return false;
            }
        }

     
        return true;
    }
};
