class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n=nums.size(),cnt=0,cnt1=0;
        for (int i=0;i<n;i++) {
            cnt=0;
            for (int j=i;j<n;j++) {
                if (nums[j]==target) cnt++;
                if (cnt>(j-i+1)/2) cnt1++;
            }
        }
        return cnt1;
    }
};