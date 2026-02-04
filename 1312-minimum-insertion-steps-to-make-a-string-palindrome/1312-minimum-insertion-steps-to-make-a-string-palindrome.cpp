class Solution {
public:
    int subs(int i,int j,string&s, string&p,vector<vector<int>>&dp) {
        if (i<0 || j<0) return 0;
        if (dp[i][j]!=-1) return dp[i][j];
        if (s[i]==p[j]) return dp[i][j]=1+subs(i-1,j-1,s,p,dp);
        return dp[i][j]=max(subs(i,j-1,s,p,dp),subs(i-1,j,s,p,dp));
    }

    int minInsertions(string s) {
        int n=s.size();
        string p=s;
        reverse(p.begin(),p.end());
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return n-subs(n-1,n-1,s,p,dp);
    }
};