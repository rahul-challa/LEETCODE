class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        
        // Sorting the lists of players and trainers
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());

        // Variable to store the result
        int count = 0;

        // Two Pointers 
        int i = 0;
        int j = 0;

        // Sizes of arrays
        int m = players.size();
        int n = trainers.size();


        // Checking if the matches are valid
        while (i < m && j < n){
            // Greedy Method - Matching worst player with worst trainer and incrementing form there
            if (players[i] <= trainers[j]){
                count += 1;
                i += 1;
                j += 1;
            }
            else{
                j += 1;
            }
        }
    return count; // Return Result
    }
};