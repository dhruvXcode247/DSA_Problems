class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        long long n=nums.size(),i=n-2;
        long long curr=nums[n-1],maxi=nums[n-1];
        while (i>=0) {
            if (nums[i]<=curr) {
                curr+=nums[i];
                i--;
            }
            else {
                curr=nums[i];
                i--;
            }
            maxi=max(maxi,curr);
        }
        return maxi;
    }
};