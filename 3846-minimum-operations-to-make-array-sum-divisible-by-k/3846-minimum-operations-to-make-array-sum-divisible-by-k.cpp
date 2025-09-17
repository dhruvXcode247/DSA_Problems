class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0,n=nums.size();
        for (int i=0;i<n;i++) {
            sum+=nums[i];
        }
        int add=sum%k;
        return add;
    }
};