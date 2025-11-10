class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int i=0,n=intervals.size();
        vector<vector<int>>ans;
        while (i<n && intervals[i][1]<newInterval[0]) {
            ans.emplace_back(intervals[i]);
            i++;
        }
        while (i<n && intervals[i][0]<=newInterval[1]) {
            newInterval[0]=min(newInterval[0],intervals[i][0]);
            newInterval[1]=max(newInterval[1],intervals[i][1]);
            i++;
        }
        ans.emplace_back(newInterval);
        while (i<n) {
            ans.emplace_back(intervals[i]);
            i++;
        }
        return ans;
    }
};