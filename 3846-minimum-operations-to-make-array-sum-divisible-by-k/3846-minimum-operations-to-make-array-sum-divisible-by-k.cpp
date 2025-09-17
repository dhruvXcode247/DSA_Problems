class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count=0,sum=0,maxi=INT_MIN,n=nums.size();
        for (int i=0;i<n;i++) {
            maxi=max(maxi,nums[i]);
            sum+=nums[i];
        }
        int add=sum%k;
        return add;
    }
};