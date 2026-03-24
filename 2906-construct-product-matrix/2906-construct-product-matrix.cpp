class Solution {
public:
int MOD=12345;
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>ans(m,vector<int>(n));
        long long prefix=1;
        for (int i=0;i<m;i++) {
            for (int j=0;j<n;j++) {
                ans[i][j]=prefix;
                prefix=(prefix*grid[i][j])%MOD;
            }
        }
        long long suffix=1;
        for (int i=m-1;i>=0;i--) {
            for (int j=n-1;j>=0;j--) {
                ans[i][j]=(suffix*ans[i][j])%MOD;
                suffix=(suffix*grid[i][j])%MOD;
            }
        }
        return ans;
    }
};