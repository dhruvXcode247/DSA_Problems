class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int maxi=0,xorr=0;
        for (int i=0;i<nums.size();i++) {
            for (int j=i+1;j<nums.size();j++) {
                if (abs(nums[i]-nums[j])<=min(nums[i],nums[j])) {
                    xorr=nums[i]^nums[j];
                    maxi=max(maxi,xorr);
                }
            }
        }
        return maxi;
    }
};