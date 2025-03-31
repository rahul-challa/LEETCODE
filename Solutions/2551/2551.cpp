class Solution {
    public:
        long long putMarbles(vector<int>& weights, int k) {
            int n = weights.size();
    
            // Handling Edge Cases
            if (k <= 1 || k >= n) {
                return 0;
            }
    
            vector<long long> partition_sums;
            for (int i = 0; i < n - 1; ++i) {
                partition_sums.push_back(static_cast<long long>(weights[i]) + weights[i + 1]);
            }
    
            sort(partition_sums.begin(), partition_sums.end());
    
            long long min_sum = 0;
            for (int i = 0; i < k - 1; ++i) {
                min_sum += partition_sums[i];
            }
    
            long long max_sum = 0;
            for (int i = 0; i < k - 1; ++i) {
                max_sum += partition_sums[partition_sums.size() - 1 - i];
            }
    
            return max_sum - min_sum;
        }
    };