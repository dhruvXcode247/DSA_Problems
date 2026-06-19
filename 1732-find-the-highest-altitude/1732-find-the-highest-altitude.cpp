class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi=INT_MIN,st=0;
        for (int i=0;i<gain.size();i++) {
            maxi=max(maxi,st+gain[i]);
            st=st+gain[i];
        }
        return maxi<0?0:maxi;
    }
};