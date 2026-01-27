class Solution {
public:
    bool subsets(int n,vector<int>&nums,int target,vector<vector<int>>&dp) {
        if (target==0) {
            return true;
        }
        if (n==0) return nums[0]==target;
        if (dp[n][target]!=-1) return dp[n][target];
        bool notTake=subsets(n-1,nums,target,dp);
        bool take=false;
        if (nums[n]<=target) {
            take=subsets(n-1,nums,target-nums[n],dp);
        }
        return dp[n][target]= take || notTake;
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size(),sum=0;
        for (int i=0;i<n;i++) {
            sum+=nums[i];
        }
        if (sum%2) return false;
        int target=sum/2;
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return subsets(n-1,nums,target,dp);
    }
};