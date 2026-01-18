class Solution {
public:
    int calculate(int m,int n, vector<vector<int>>&dp) {
        if (m==1 && n==1) return 1;
        if (m<1 || n<1) return 0;
        if (dp[m][n]!=-1) return dp[m][n];
        int left=calculate(m,n-1,dp);
        int up=calculate(m-1,n,dp);
        return dp[m][n]=left+up;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return calculate(m,n,dp);
    }
};