class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size(),sum=0,i=0;
        while(i<n) {
            sum=0;
            while(nums[i]>0) {
                sum+=nums[i]%10;
                nums[i]/=10;
            }
            if (sum==i) return i;
            i++;
        }
        return -1;
    }
};