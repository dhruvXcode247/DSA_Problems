class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int time=0;
        for (int i=0;i<colors.size()-1;i++) {
            if (colors[i]==colors[i+1]) {
                time+=min(neededTime[i],neededTime[i+1]);
                neededTime[i+1]=max(neededTime[i],neededTime[i+1]);
            }
        }
        return time;
    }
};