class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
     unordered_map<string, int> voteCount;

      
        for (int i = 0; i < n; ++i) {
            voteCount[arr[i]]++;
        }

        int maxVotes = 0;
        string winnerName;

       
        for (const auto& entry : voteCount) {
            if (entry.second > maxVotes || (entry.second == maxVotes && entry.first < winnerName)) {
                maxVotes = entry.second;
                winnerName = entry.first;
            }
        }

     
        return {winnerName, to_string(maxVotes)};
    }
};
