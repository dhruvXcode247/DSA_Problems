class Solution {
public:
int MOD=1e9+7;
    pair<long long,long long> product(vector<vector<int>>&grid ,int i, int j, 
    vector<vector<pair<long long, long long>>>&dp) {
        if (i==0 && j==0) {
            return dp[i][j]={grid[0][0],grid[0][0]};
        }
        if (dp[i][j].first!=-1) return dp[i][j];
        long long  maxi=LLONG_MIN;
        long long mini=LLONG_MAX;

        if (j-1>=0) {
            auto left=product(grid,i,j-1,dp);
            maxi=max({maxi,left.first*grid[i][j],left.second*grid[i][j]});
            mini=min({mini,left.first*grid[i][j],left.second*grid[i][j]});
        }
        if (i-1>=0) {
            auto up=product(grid,i-1,j,dp);
            maxi=max({maxi,up.first*grid[i][j],up.second*grid[i][j]});
            mini=min({mini,up.first*grid[i][j],up.second*grid[i][j]});
        }
        return dp[i][j]={maxi,mini};
    }
    int maxProductPath(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<pair<long long,long long>>>dp(m,vector<pair<long long, long long>>(n,{-1,-1}));
        pair<long long, long long> res=product(grid,m-1,n-1,dp);
        if (res.first<0) return -1;
        return res.first%MOD;
    }
};