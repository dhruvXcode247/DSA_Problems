class Solution {
public:
    int calculate(int m,int n, vector<vector<int>>&dp) {
        for (int i=0;i<m;i++) {
            for (int j=0;j<n;j++) {
                if (i==0 && j==0) {
                    dp[i][j]=1;
                }
                else {
                    int up=0;
                    int left=0;
                    if (i>0) {
                        up=dp[i-1][j];
                    }
                    if (j>0) {
                        left=dp[i][j-1];
                    }
                    dp[i][j]=up+left;
                }
            }
        }
        return dp[m-1][n-1];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return calculate(m,n,dp);
    }
};