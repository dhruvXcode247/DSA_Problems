class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum=0,n=nums.size();
        for (int it:nums) {
            sum+=it;
        }
        int leftSum=0,count=0;
        for (int i=0;i<n-1;i++) {
            leftSum+=nums[i];
            int rightSum=sum-leftSum;
            if ((leftSum-rightSum)%2==0) count++;
        }
        return count;
    }
};