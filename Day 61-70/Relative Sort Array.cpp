class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> rank;

        for (int i = 0; i < arr2.size(); ++i) {
            rank[arr2[i]] = i;
        }

        sort(arr1.begin(), arr1.end(), [&](int a, int b) {
            if (rank.find(a) != rank.end() && rank.find(b) != rank.end()) {
                return rank[a] < rank[b];
            } else if (rank.find(a) != rank.end()) {
                return true;
            } else if (rank.find(b) != rank.end()) {
                return false;
            } else {
                return a < b;
            }
        });

        return arr1;
    }
};
