class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size(),prod=1,prod2=1;
        sort(nums.begin(),nums.end());

        for (int i=n-1;i>=n-3;i--) {
            prod*=nums[i];
        }
        prod2*=nums[n-1]*nums[0]*nums[1];
        return max(prod2,prod);
    }
};