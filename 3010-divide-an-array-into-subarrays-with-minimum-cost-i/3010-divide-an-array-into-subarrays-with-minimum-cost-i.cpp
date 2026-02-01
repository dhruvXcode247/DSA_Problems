class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n=nums.size(),sum=0,idx=-1,j=0;
        int first=nums[0];
        while (j<2) {
            int mini=INT_MAX;
            for (int i=1;i<n;i++) {
                if (mini>nums[i]) {
                    mini=nums[i];
                    idx=i;
                }
            }
            nums[idx]=INT_MAX;
            sum+=mini;
            j++;
        }
        return first+sum;
    }
};