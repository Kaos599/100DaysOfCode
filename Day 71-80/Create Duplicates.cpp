class Solution {
public:
    int distributeCandies(std::vector<int>& candyType) {
        std::unordered_set<int> uniqueCandies(candyType.begin(), candyType.end());
        int maxTypes = std::min(uniqueCandies.size(), candyType.size() / 2);
        return maxTypes;
    }
};
