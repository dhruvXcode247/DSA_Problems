class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        long long sum=0;
        for (int i=0;i<m;i++) {
            for (int j=0;j<n;j++) {
                sum+=grid[i][j];
            }
        }
        if (sum%2==1) return false;
        long long sum1=0,sum2=0;
        for (int i=0;i<m;i++) {
            for (int j=0;j<n;j++) {
                sum1+=grid[i][j];
            }
            if (sum/2==sum1) return true;
        }
        for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {
                sum2+=grid[j][i];
            }
            if (sum/2==sum2) return true;
        }
        return false;
    }
};