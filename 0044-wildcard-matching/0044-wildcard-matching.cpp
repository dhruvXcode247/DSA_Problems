class Solution {
public:
    bool isMatch(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<vector<bool>>dp(n+1,vector<bool>(m+1,false));
        dp[0][0]=true;
        for (int j=1;j<=m;j++) {
            int flag=true;
            for (int jj=1;jj<=j;jj++) {
                if (p[jj-1]!='*') {
                    flag=false;
                }
            }
            dp[0][j]=flag;
        }
        for (int i=1;i<=n;i++) {
            dp[i][0]=false;
        }
        for (int i=1;i<=n;i++) {
            for (int j=1;j<=m;j++) {
                if (s[i-1]==p[j-1] || p[j-1]=='?') {
                    dp[i][j]=dp[i-1][j-1];
                }
                else if (p[j-1]=='*') {
                    dp[i][j]=dp[i][j-1] || dp[i-1][j];
                }
                else dp[i][j]=false;
            }
        }
        return dp[n][m];
    }
};