#include <vector>
#include <algorithm>
#include <string>

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<pair<int, int>> scoresWithIndex;

        // Step 1: Create a vector of pairs with scores and original indices
        for (int i = 0; i < n; ++i) {
            scoresWithIndex.push_back({score[i], i});
        }

        // Step 2: Sort the vector in descending order based on scores
        sort(scoresWithIndex.rbegin(), scoresWithIndex.rend());

        // Step 3: Update ranks and store the result in a vector
        vector<string> result(n);
        for (int i = 0; i < n; ++i) {
            if (i == 0) {
                result[scoresWithIndex[i].second] = "Gold Medal";
            } else if (i == 1) {
                result[scoresWithIndex[i].second] = "Silver Medal";
            } else if (i == 2) {
                result[scoresWithIndex[i].second] = "Bronze Medal";
            } else {
                result[scoresWithIndex[i].second] = to_string(i + 1);
            }
        }

        // Step 4: Return the result vector
        return result;
    }
};
