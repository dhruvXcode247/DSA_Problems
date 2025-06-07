class Solution {
public:
    // Helper function that uses recursion + memoization
    int robFrom(vector<int>& nums, int i, vector<int>& memo) {
        // Base case: if index goes out of bounds, return 0
        if (i >= nums.size()) return 0;

        // If we've already solved this subproblem, return the stored result
        if (memo[i] != -1) return memo[i];

        // Rob the current house and move to i+2
        int rob = nums[i] + robFrom(nums, i + 2, memo);

        // Skip the current house and move to i+1
        int skip = robFrom(nums, i + 1, memo);

        // Store the result in memo and return the max of the two options
        return memo[i] = max(rob, skip);
    }

    int rob(vector<int>& nums) {
        // Create a memo array to store results of subproblems, initialized to -1
        vector<int> memo(nums.size(), -1);

        // Start recursion from the first house (index 0)
        return robFrom(nums, 0, memo);
    }
};
