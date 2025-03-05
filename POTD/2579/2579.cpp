class Solution {
    public:
        long long coloredCells(int n) {
            long long result = 0;
            int append = 4;
            if (n == 1){
                result = 0;
            }
            else{
                for (int i = 1 ; i < n ; i++){
                    result = result + i*4;
                }
            }
            return result + 1;
        }
    
    };