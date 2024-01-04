
class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        int expectedSum = (n * (n + 1)) / 2;
        int actualSum = accumulate(array.begin(), array.end(), 0);
        return expectedSum - actualSum;
    }
};
