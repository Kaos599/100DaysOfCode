#include <iostream>
#include <string>

class Solution {
public:
    std::string reversePrefix(std::string word, char ch) {
        int index = word.find(ch);
        if (index != std::string::npos) {

            std::reverse(word.begin(), word.begin() + index + 1);
        }
        return word;
    }
};
