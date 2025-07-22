class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        // Pointer, Tracking curr subarr sum, result 
        int ptr1 = 0, currentSum = 0, res = 0;

        // Hash set of Int to keep track of unique elements
        unordered_set<int> uniqueElements;

        // Interating second pointer from prt1 to end of array 
        for(int ptr2 = 0; ptr2 < nums.size(); ptr2++){
            // If the number is not unique 
            while (uniqueElements.find(nums[ptr2]) != uniqueElements.end()){
                // Clearing Hashset
                uniqueElements.erase(nums[ptr1]);
                currentSum -= nums[ptr1];
                // Trying Next subarray 
                ptr1++;
            }
            // If number is unique add to currsum
            currentSum += nums[ptr2];
            uniqueElements.insert(nums[ptr2]);
            
            // Store max sum as the result
            res = max(res, currentSum);
        }
        // Retrun the result
        return res;
    }
};