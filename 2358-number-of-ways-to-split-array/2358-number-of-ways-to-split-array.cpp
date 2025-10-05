class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int count=0,n=nums.size();
        long long sum=0,prefixSum=0;
        for (int i:nums) {
            sum+=i;
        }
        for (int i=0;i<n-1;i++) {
            prefixSum+=nums[i];
            if (prefixSum>=sum-prefixSum) {
                count++;
            }
        }
        return count;
    }
};