#include <iostream>
#include <vector>

class Solution {
public:
    void duplicateZeros(std::vector<int>& arr) {
        int originalSize = arr.size();
        int possibleDups = 0;

        for (int i = 0; i < originalSize; ++i) {
            if (arr[i] == 0) {
                ++possibleDups;
            }
        }

        for (int i = originalSize - 1; i >= 0; --i) {
            if (i + possibleDups < originalSize) {
                arr[i + possibleDups] = arr[i];
            }

            if (arr[i] == 0) {
                --possibleDups;
                if (i + possibleDups < originalSize) {
                    arr[i + possibleDups] = 0;
                }
            }
        }
    }
};
