class Solution {
public:
    int f(int ind,vector<int>&nums,vector<int>&dp) {
        dp[0]=nums[0];
        int neg=0;
        for (int i=1;i<nums.size();i++) {
            int take=nums[i];
            if (i>1) take+=dp[i-2];
            int notTake=0+dp[i-1];
            dp[i]=max(take,notTake);
        }
        return dp[ind];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return f(n-1,nums,dp);
    }
};