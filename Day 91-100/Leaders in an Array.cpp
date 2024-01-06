#include <vector>

class Solution{
public:
    // Function to find the leaders in the array.
    vector<int> leaders(int a[], int n){
        vector<int> result;
        
        int maxRight = a[n - 1]; // Rightmost element is always a leader
        result.push_back(maxRight);
        
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] >= maxRight) {
                maxRight = a[i];
                result.push_back(maxRight);
            }
        }
        
        reverse(result.begin(), result.end()); // Reverse the result vector to maintain the original order
        
        return result;
    }
};
