class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int count=0,n=intervals.size(),lastEnd=INT_MIN;
        sort(intervals.begin(),intervals.end(),[](auto&a,auto&b) {
            return a[1]<b[1];
        });
        for (int i=0;i<n;i++) {
            if (intervals[i][0]>=lastEnd) {
                lastEnd=intervals[i][1];
            }
            else count++;
        }
        return count;
    }
};