class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n=nums.size(),i=0,p=0,q=0;
            while (q==0 && i+1<n && nums[i]<nums[i+1]) {
                p++;
                i++;
            }
            q=p;
            while (i+1<n && nums[i]>nums[i+1]) {
                i++;
                q++;
            }
            while (i+1<n && nums[i]<nums[i+1]) {
                i++;
            }
        if (i!=n-1 || p==0 || q==p || q==n-1) return false;
        return true;
    }
};