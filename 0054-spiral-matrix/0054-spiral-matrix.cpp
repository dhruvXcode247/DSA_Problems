class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m=matrix.size(),n=matrix[0].size(),top=0,left=0,right=n-1,bottom=m-1;
       while (top<=bottom && left<=right) {
        for (int i=left;i<=right;i++) {
            ans.emplace_back(matrix[top][i]);
        }
        top++;
        for (int i=top;i<=bottom;i++) {
            ans.emplace_back(matrix[i][right]);
        }
        right--;
        if (top<=bottom) {
            for (int i=right;i>=left;i--) {
            ans.emplace_back(matrix[bottom][i]);
            }
        }
        bottom--;
        if (left<=right) {
            for (int i=bottom;i>=top;i--) {
            ans.push_back(matrix[i][left]);
            }
        }
        left++;
       }
       return ans;
    }
};