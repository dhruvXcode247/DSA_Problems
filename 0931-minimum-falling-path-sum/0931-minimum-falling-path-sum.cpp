class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m=matrix.size(),ans=INT_MAX;
        vector<vector<int>>dp(m,vector<int>(m,-1));
        for (int j=0;j<m;j++) {
            dp[m-1][j]=matrix[m-1][j];
        }
        for (int i=m-2;i>=0;i--) {
            for (int j=m-1;j>=0;j--) {
                int left=(j>0)?dp[i+1][j-1]+matrix[i][j]:1e9;
                int down=dp[i+1][j]+matrix[i][j];
                int right=(j<m-1)?dp[i+1][j+1]+matrix[i][j]:1e9;
                dp[i][j]=min({left,down,right});
            }
        }
        for (int i=0;i<m;i++) {
            ans=min(ans,dp[0][i]);
        }
        return ans;
    }
};