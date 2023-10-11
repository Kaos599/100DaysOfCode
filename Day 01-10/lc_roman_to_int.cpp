class Solution {
public:
    int romanToInt(string s) {
        int x = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'I') {
                if (i < s.size() - 1 && (s[i + 1] == 'V' || s[i + 1] == 'X')) {
                    if (s[i + 1] == 'V') {
                        x += 4;
                    } else {
                        x += 9;
                    }
                    i++; 
                } else {
                    x += 1;
                }
            } else if (s[i] == 'X') {
                if (i < s.size() - 1 && (s[i + 1] == 'L' || s[i + 1] == 'C')) {
                    if (s[i + 1] == 'L') {
                        x += 40;
                    } else {
                        x += 90;
                    }
                    i++; 
                } else {
                    x += 10;
                }
            } else if (s[i] == 'C') {
                if (i < s.size() - 1 && (s[i + 1] == 'D' || s[i + 1] == 'M')) {
                    if (s[i + 1] == 'D') {
                        x += 400;
                    } else {
                        x += 900;
                    }
                    i++; 
                } else {
                    x += 100;
                }
            } else if (s[i] == 'V') {
                x += 5;
            } else if (s[i] == 'L') {
                x += 50;
            } else if (s[i] == 'D') {
                x += 500;
            } else if (s[i] == 'M') {
                x += 1000;
            }
        }
        return x;
    }
};
