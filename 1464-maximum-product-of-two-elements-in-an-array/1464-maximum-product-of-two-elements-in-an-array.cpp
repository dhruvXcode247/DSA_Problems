class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size(),maxi=INT_MIN,secmaxi=-1;
        for (int i=0;i<n;i++) {
            if (nums[i]>maxi) {
                secmaxi=maxi;
                maxi=nums[i];
            }
            else if (nums[i]>secmaxi) {
                secmaxi=nums[i];
            }
        }
        return (maxi-1)*(secmaxi-1);
    }
};