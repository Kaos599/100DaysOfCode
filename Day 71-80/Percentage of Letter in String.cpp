#include <iostream>
using namespace std;

class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count = 0;

        for (char ch : s) {
            if (ch == letter) {
                count++;
            }
        }

        int totalCharacters = s.size();

        if (totalCharacters == 0) {
            return 0;  // Avoid division by zero
        }

        int percentage = (count * 100) / totalCharacters;

        return percentage;
    }
};
