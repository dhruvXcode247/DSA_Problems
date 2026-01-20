class Solution {
public:
    int unique(int m,int n,vector<vector<int>>&obstacleGrid,vector<vector<int>>&dp) {
        if (m<1 || n<1) return 0;
        if (obstacleGrid[m-1][n-1]==1) return 0;
        if (m==1 && n==1) return 1;
        if (dp[m][n]!=-1) return dp[m][n];
        int left=unique(m,n-1,obstacleGrid,dp);
        int up=unique(m-1,n,obstacleGrid,dp);
        return dp[m][n]=left+up;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return unique(m,n,obstacleGrid,dp);
    }
};