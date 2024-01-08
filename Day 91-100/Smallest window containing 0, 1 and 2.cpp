class Solution {
  public:
    int smallestSubstring(string S) {
        vector<int> charCount(3, 0); 
        int count = 0; 
        int left = 0;
        int minLength = INT_MAX;

        for (int right = 0; right < S.length(); right++) {
            char currentChar = S[right] - '0'; 
            charCount[currentChar]++;

            if (charCount[currentChar] == 1) {
               
                count++;
            }

            
            while (count == 3) {
                minLength = min(minLength, right - left + 1);
                char leftChar = S[left] - '0';
                charCount[leftChar]--;

                if (charCount[leftChar] == 0) {
                    
                    count--;
                }

              \
                left++;
            }
        }

        return (minLength == INT_MAX) ? -1 : minLength;
    }
    
};
