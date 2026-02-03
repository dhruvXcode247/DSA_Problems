class Solution {
public:
    int expressions(int n,vector<int>&nums,int target,vector<vector<int>>&dp) {
        if (n==0) {
            if (nums[n]==0 && target==0) return 2;
            if (target==0 || nums[0]==target) return 1;
            return 0; 
        }
        if (dp[n][target]!=-1) {
            return dp[n][target];
        }
        int notTake=expressions(n-1,nums,target,dp);
        int take=0;
        if (nums[n]<=target) take=expressions(n-1,nums,target-nums[n],dp);
        return dp[n][target]=(take+notTake);
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size(),totsum=0;
        for (int i=0;i<n;i++) {
            totsum+=nums[i];
        }
        if (totsum-target<0 || (totsum-target)%2) return 0;
        int s2=(totsum-target)/2;
        vector<vector<int>>dp(n,vector<int>(s2+1,-1));
        return expressions(n-1,nums,s2,dp);
    }
};