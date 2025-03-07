class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // Iterating through input elements for first element
        for (int i = 0; i < nums.size(); i++) {

            // Interating through input elements after first element 
            // array does not need to be sorted
            for (int j = i + 1; j < nums.size(); j++) {

                // checking if the pair adds up to target
                if (nums[j] == target - nums[i]) {

                    // returning successful pair 
                    return {i, j};
                }
            }
        }
        // Returning an empty vector if no solution is found
        return {}; 
    }
};