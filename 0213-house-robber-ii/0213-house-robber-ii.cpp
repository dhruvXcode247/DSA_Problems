class Solution {
public:
    int f(int ind,vector<int>&nums,vector<int>&dp) {
        if (ind==0) return nums[0];
        if (ind<0) return 0;
        if (dp[ind]!=-1) return dp[ind];
        int pick=nums[ind]+f(ind-2,nums,dp);
        int notPick=0+f(ind-1,nums,dp);
        return dp[ind]=max(pick,notPick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if (n==1) return nums[0];
        // for index 0 to second last index
        vector<int>dp1(n-1,-1);
        vector<int>temp1(nums.begin(),nums.end()-1);
        // for index 1 to last index
        vector<int>temp2(nums.begin()+1,nums.end());
        vector<int>dp2(n-1,-1);
        // return their max
        return max(f(n-2,temp1,dp1),f(n-2,temp2,dp2));
    }
};