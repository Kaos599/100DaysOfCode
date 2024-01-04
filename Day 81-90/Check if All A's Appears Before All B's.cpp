#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool checkString(string s) {
        bool foundB = false;

        for (char ch : s) {
            if (ch == 'a') {
                if (foundB) {
                    return false; 
                }
            } else {
                foundB = true; 
            }
        }

        return true; 
    }
};
