class Solution {
public:
    int sumOfInt(vector<int>&nums,int mid) {
        int sum=0;
        for (int i=0;i<nums.size();i++) {
            sum+=(nums[i]+mid-1)/mid;
        } 
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size(),ans,beg=1,end=*max_element(nums.begin(),nums.end()),mid;
        while(beg<=end) {
            mid=(beg+end)/2;
            if (sumOfInt(nums,mid)<=threshold) {
                ans=mid;
                end=mid-1;
            }
            else {
                beg=mid+1;
            }
        }
        return beg;
    }
};