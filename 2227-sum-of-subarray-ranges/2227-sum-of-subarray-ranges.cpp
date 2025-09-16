class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size(),maxi,mini;
        long long sum=0;
        for (int i=0;i<n;i++) {
            maxi=nums[i];
            mini=nums[i];
            for (int j=i;j<n;j++) {
                maxi=max(maxi,nums[j]);
                mini=min(mini,nums[j]);
                sum+=maxi-mini;
            }
        }
        return sum;
    }
};