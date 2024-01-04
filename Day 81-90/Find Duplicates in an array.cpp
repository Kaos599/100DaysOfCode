class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        vector<int> result;

        for (int i = 0; i < n; i++) {
            int index = arr[i] % n; 

            arr[index] += n;
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] / n > 1) {
                result.push_back(i);
            }
        }

        if (result.empty()) {
            result.push_back(-1);
        }

        return result;
    }
    
};
