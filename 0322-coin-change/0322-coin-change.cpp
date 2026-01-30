class Solution {
public:
    int fewest(vector<int>&coins,int amount,int ind,vector<vector<int>>&dp) {
        if (amount==0) return 0;
        if (ind == 0) {
            if (amount%coins[ind]==0) {
                return amount/coins[ind];
            }
            else return 1e9;
        }
        if (dp[ind][amount]!=-1) return dp[ind][amount];
        int notTake=0+fewest(coins,amount,ind-1,dp);
        int take=1e9;
        if (coins[ind]<=amount) take=1+fewest(coins,amount-coins[ind],ind,dp);
        return dp[ind][amount]=min(take,notTake);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans = fewest(coins, amount, n - 1, dp);
        return (ans >= 1e9 ? -1 : ans);

    }
};