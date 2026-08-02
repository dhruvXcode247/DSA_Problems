class Solution {
public:

    int maxi(vector<int>nums, int i, vector<int>&memo) {
        if (i<0) return 0;
        if (i==0) return nums[i];
        if (memo[i]!=-1) return memo[i];

        int pick=nums[i]+maxi(nums,i-2,memo);
        int notpick=0+maxi(nums,i-1,memo);

        return memo[i]=max(pick,notpick);


    }

    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>memo(n,-1);
        return maxi(nums,n-1,memo);
    }
};