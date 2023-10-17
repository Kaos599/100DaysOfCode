class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return ""; 
        }

        for (int i = 0; i < strs[0].length(); ++i) {
            char firstChar = strs[0][i];

            for (const string& word : strs) {
                if (i >= word.length() || word[i] != firstChar) {
                    return strs[0].substr(0, i); 
                }
            }
        }

        return strs[0]; 
    }
};
