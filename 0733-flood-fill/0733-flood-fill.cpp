class Solution {
public:
    void dfs(int row, int col, vector<vector<int>>&ans, vector<vector<int>>&image,
    int initialcolor,int newcolor, int deleterow[], int deletecol[], int n, int m) {
        ans[row][col]=newcolor;
        for (int i=0;i<4;i++) {
            int newrow=row+deleterow[i];
            int newcol=col+deletecol[i];
            if (newrow>=0 && newrow<n && newcol>=0 && newcol<m && 
            image[newrow][newcol]==initialcolor && ans[newrow][newcol]!=newcolor) {
                dfs(newrow,newcol,ans,image,initialcolor,newcolor,deleterow,deletecol,n,m);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size(),m=image[0].size();
        int initialcolor=image[sr][sc];
        int deleterow[]={0,1,0,-1};
        int deletecol[]={1,0,-1,0};
        vector<vector<int>>ans=image;
        dfs(sr,sc,ans,image,initialcolor,color,deleterow,deletecol,n,m);
        return ans;
    }
};