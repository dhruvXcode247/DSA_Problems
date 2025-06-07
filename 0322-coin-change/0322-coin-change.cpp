class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        // Create a memo array to store results of subproblems
        // Initialize with -2 to indicate "not yet calculated"
        vector<int> memo(amount + 1, -2);
        
        // Call the helper recursive function to compute min coins
        int res = dfs(coins, amount, memo);
        
        // If result is INT_MAX, it means no solution found, so return -1 Otherwise, return the result
        return res == INT_MAX ? -1 : res;
    }
    int dfs(vector<int>& coins, int amount, vector<int>& memo) {
        // Base case: when amount is zero, no coins needed
        if (amount == 0) return 0;
        
        // Base case: when amount is negative, no solution
        if (amount < 0) return INT_MAX;
        
        // If already calculated for this amount, return result
        if (memo[amount] != -2) return memo[amount];
        
        // Initialize minimum coins needed as a large number (infinity)
        int minCoins = INT_MAX;
        
        // Try every coin denomination
        for (int coin : coins) {
            int res = dfs(coins, amount - coin, memo);
            
            // If result is not infinity, update minimum coins needed
            if (res != INT_MAX) {
                // +1 because we used one coin here
                minCoins = min(minCoins, res + 1);
            }
        }
        
        // Store computed minimum coins in memo to avoid recalculation
        memo[amount] = minCoins;
        
        // Return the calculated minimum coins for this amount
        return minCoins;
    }
};
