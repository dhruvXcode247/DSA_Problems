class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        if (n==1) return nums[0];
        vector<int>newNums(n-1);
        while(n>1) {
            for (int i=0;i<n-1;i++) {
                newNums[i]=((nums[i]+nums[i+1])%10);
                nums[i]=newNums[i];
            }
            n--;
        }
        return nums[0];
    }
};