class Solution {
public:
    int convert(int i, int j, string &p, string &q,vector<vector<int>>&dp) {
        if (i<0) return j+1;
        if (j<0) return i+1;
        if (dp[i][j]!=-1) return dp[i][j];
        if (p[i]==q[j]) return dp[i][j]=convert(i-1,j-1,p,q,dp);
        return dp[i][j]=1+min({convert(i,j-1,p,q,dp),convert(i-1,j-1,p,q,dp),convert(i-1,j,p,q,dp)});
    }

    int minDistance(string word1, string word2) {
        int n=word1.size(),m=word2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return convert(n-1,m-1,word1,word2,dp);
    }
};