class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int mini=INT_MAX,n=nums.size(),maxi=nums[0],smaxi=INT_MIN,idx=-1;
        for (int i=0;i<n;i++) {
            if (mini>nums[i]) {
                mini=nums[i];
                idx=i;
            }
        }
        for (int i=1;i<n;i++) {
            if (i!=idx) {
                if (maxi<nums[i]) {
                    smaxi=maxi;
                    maxi=nums[i];
                }
                else if (smaxi<maxi && smaxi<nums[i]) smaxi=nums[i];
            }
        }
        return maxi+smaxi-mini;
    }
};