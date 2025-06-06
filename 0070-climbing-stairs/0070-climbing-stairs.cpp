class Solution {
public:
    int climbStairs(int n) {
        // Create a memoization array initialized to -1
        // It will store the number of ways to reach each step
        vector<int> memo(n + 1, -1);
        
        // Call the helper recursive function with memoization
        return climb(n, memo);
    }

    // Helper function that uses recursion + memoization
    int climb(int n, vector<int>& memo) {
        // Base case: If n is 0 or 1, there is only 1 way to climb
        if (n == 0 || n == 1) return 1;

        // If we have already calculated the result for this n, return it
        if (memo[n] != -1) return memo[n];

        // Otherwise, calculate the result and store it in memo
        // We can reach step n by taking 1 step from (n-1) or 2 steps from (n-2)
        memo[n] = climb(n - 1, memo) + climb(n - 2, memo);

        // Return the stored result
        return memo[n];
    }
};

