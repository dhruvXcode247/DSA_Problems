class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0,n=mat.size();
        for (int i=0;i<n;i++) {
            for (int j=0;j<n;j++) {
                if (i==j) {
                    sum =sum+mat[i][j];
                }
                else if (j==n-i-1) {
                    if (j==i) {
                        sum=sum+0;
                    }
                    else {
                        sum =sum+mat[i][j];
                    }
                }
            }
        }
        return sum;
    }
};