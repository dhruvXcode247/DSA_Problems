class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size(),maxi;
        vector<vector<int>>answer(m,vector<int>(n));
        for (int i=0;i<m;i++) {
            for (int j=0;j<n;j++) {
                answer[i][j]=matrix[i][j];
            }
        }
        for (int i=0;i<n;i++) {
            maxi=INT_MIN;
            for (int j=0;j<m;j++){
                maxi=max(maxi,answer[j][i]);
            }
            for (int k=0;k<m;k++) {
                if (answer[k][i]==-1) answer[k][i]=maxi;
            }
        }
        return answer;
    }
};