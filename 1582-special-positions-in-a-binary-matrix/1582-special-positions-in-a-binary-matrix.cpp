class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int cnt=0;
        bool flag=true;
        for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {
                flag=true;
                if (mat[i][j]==1) {
                    for (int k=0;k<n;k++) {
                        if (k!=i && mat[k][j]!=0) {
                            flag=false;
                            break;
                        }
                    }
                    for (int l=0;l<m;l++) {
                        if (l!=j && mat[i][l]!=0) {
                            flag=false;
                            break;
                        }
                    }
                    if (flag) cnt++;
                }
            }
        }
        return cnt;
    }
};