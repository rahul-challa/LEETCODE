// Date: 29-07-2024
// 1395. Count Number of Teams

class Solution {
public:
    int numTeams(vector<int>& rating) {
        
        // variable to store result 
        int res = 0;

        // variable to store array size 
        int size = rating.size();

        // initializing variables
        int left_larger, left_smaller, right_larger, right_smaller = 0;

        for(int i = 1; i < size; i++){
            left_smaller = right_larger = 0;

            for(int x=0; x < i; x++){
                if(rating[x] < rating[i]){
                    left_smaller += 1;
                }

            for(int y = i+1; y < size; y++){
                if(rating[y] > rating[i]){
                    right_larger += 1;
                }
            }
            res += left_smaller * right_larger; // counting ascending

            left_larger = i - left_smaller;
            right_smaller = size - i - 1 - right_larger;
            res += left_larger * right_smaller;

            }
        }
        return res;
    }
};

