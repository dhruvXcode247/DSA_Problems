class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(), [](auto &a, auto &b) {
            if (a[0] == b[0]) return a[1] > b[1];
            return a[0] < b[0];
        });
        int m=intervals.size(),cnt=1,end=intervals[0][1];
        for (int i=1;i<m;i++) {
            if (intervals[i][1]>end) { 
                cnt++;
                end=intervals[i][1];
            }
        }
        return cnt;
    }
};