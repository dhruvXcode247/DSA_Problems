class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size(),totsum=0;
        for (int i=0;i<n;i++) {
            totsum+=nums[i];
        }
        if (totsum-target<0 || (totsum-target)%2) return 0;
        int s2=(totsum-target)/2;
        vector<vector<int>>dp(n,vector<int>(s2+1,0));
        if (nums[0]==0) dp[0][0]=2;
        else dp[0][0]=1;
        if (nums[0]!=0 && nums[0]<=s2) dp[0][nums[0]]=1;
        for (int ind=1;ind<n;ind++) {
            for (int sum=0;sum<=s2;sum++) {
                int notTake=dp[ind-1][sum];
                int take=0;
                if (nums[ind]<=sum) take=dp[ind-1][sum-nums[ind]];
                dp[ind][sum]=take+notTake;
            }
        }
        return dp[n-1][s2];
    }
};