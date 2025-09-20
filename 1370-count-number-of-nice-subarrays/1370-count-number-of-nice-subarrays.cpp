class Solution {
public:
    int countSubarrays(vector<int>nums,int k) {
        int l=0,sum=0,r=0,count=0,n=nums.size();
        if (k<0) return 0;
        while(r<n) {
            sum+=(nums[r]%2);
            while (sum>k) {
                sum-=nums[l]%2;
                l++;
            }
            count=count+(r-l+1);
            r++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return countSubarrays(nums,k)-countSubarrays(nums,k-1);
    }
};