class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int n=tasks.size(),size,sum=0,mini=INT_MAX;
        for (int i=0;i<n;i++) {
            sum=0;
            sum+=tasks[i][0];
            sum+=tasks[i][1];
            mini=min(mini,sum);
        }
        return mini;
    }
};