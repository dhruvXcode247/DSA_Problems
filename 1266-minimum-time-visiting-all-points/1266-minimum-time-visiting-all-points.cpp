class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int time=0,n=points.size();
        for (int i=1;i<n;i++) {
            time+=max(abs(points[i][0]-points[i-1][0]),abs(points[i][1]-points[i-1][1]));
        }
        return time;
    }
};