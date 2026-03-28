class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int n=nums.size(),mini=INT_MAX,idx1=-1,idx2=-1;
        for (int i=0;i<n;i++) {
            if (nums[i]==1) {
                idx1=i;
                if (idx2!=-1) {
                    mini=min(mini,abs(idx1-idx2));
                }
            }
            else if (nums[i]==2) {
                idx2=i;
                if (idx1!=-1) {
                    mini=min(mini,abs(idx1-idx2));
                }
            }
        }
        if (mini==INT_MAX) return -1;
        return mini;
    }
};