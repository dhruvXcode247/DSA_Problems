class Solution {
private:
    void bfs(int start,vector<vector<int>>&adjLs,vector<int>&vis) {
        queue<int>q;
        q.push(start);
        vis[start]=1;
        while (!q.empty()) {
            int node=q.front();
            q.pop();
            for (auto it : adjLs[node]) {
                if (!vis[it]) {
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V=isConnected.size();
        vector<vector<int>>adjLs(V);
        for (int i=0;i<V;i++) {
            for (int j=0;j<V;j++) {
                if (isConnected[i][j]==1 && i!=j) {
                    adjLs[i].emplace_back(j);
                    adjLs[j].emplace_back(i);
                }
            }
        }
        vector<int> vis(V,0);
        int cnt=0;
        for (int i=0;i<V;i++) {
            if (!vis[i]) {
                cnt++;
                bfs(i,adjLs,vis);
            }
        }
        return cnt;
    }
};