class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int maxi=INT_MIN,n=nums.size();
        for (int i=0;i<n;i++) {
             if (i==n-1) {
                maxi=max(maxi,abs(nums[i]-nums[0]));
                break;
            }
            maxi=max(maxi,abs(nums[i]-nums[i+1]));
        }
        return maxi;
    }
};