class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int n=nums.size(),mini=INT_MAX;
        for (int i=0;i<n;i++) {
            for (int j=0;j<n;j++) {
                if (nums[i]==1 && nums[j]==2) {
                    mini=min(mini,abs(i-j));
                }
            }
        }
        if (mini==INT_MAX) return -1;
        return mini;
    }
};