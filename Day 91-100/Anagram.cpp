class Solution
{
    public:
    bool isAnagram(string a, string b){
        
        if (a.length() != b.length())
        {
            return false; 
        }

        unordered_map<char, int> frequency;

        for (char c : a)
        {
            frequency[c]++;
        }

        for (char c : b)
        {
            if (frequency.find(c) == frequency.end() || frequency[c] == 0)
            {
                return false; 
            }
            frequency[c]--;
        }

        return true;
    }

};
