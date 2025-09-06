class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size(),row=0,col=n-1;
        while(row<m && col>=0) {
            if (matrix[row][col]==target) return true;
            else if (matrix[row][col]<target) row++;
            else col--;
        }
        return false;
    }
};