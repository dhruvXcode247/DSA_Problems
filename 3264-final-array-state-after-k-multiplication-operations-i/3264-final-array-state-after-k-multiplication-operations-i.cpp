class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n=nums.size();
        while (k--) {
            int mini=INT_MAX,idx=-1;
            for (int i=0;i<n;i++) {
                if (mini>nums[i]) {
                    mini=nums[i];
                    idx=i;
                }
            }
            nums[idx]=nums[idx]*multiplier;
        }
        return nums;
    }
};