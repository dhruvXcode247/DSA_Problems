class Solution {
public:
    int f(int ind,vector<int>&nums,vector<int>&dp) {
        dp[0]=nums[0];
        for (int i=1;i<nums.size();i++) {
            int take=nums[i];
            if(i>1) take+=dp[i-2];
            int notTake=dp[i-1];
            dp[i]=max(take,notTake);
        }
        return dp[nums.size()-1];
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