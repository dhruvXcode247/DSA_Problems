class Solution {
public:
    int minInsertions(string s) {
        int n=s.size();
        string p=s;
        reverse(p.begin(),p.end());
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for (int i=1;i<=n;i++) {
            for (int j=1;j<=n;j++) {
                if (s[i-1]==p[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
        return n-dp[n][n];
    }
};