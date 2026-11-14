class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size(),dist=INT_MAX;

        for (int i=0;i<n;i++) {
            int sum=0;
            for (int j=i;j<n;j++) {
                sum+=nums[j];
                if (j-i+1>=l && j-i+1<=r) {
                    if (sum>0) {
                        dist=min(dist,sum);
                    }
                }
            }
        }
        if (dist==INT_MAX) return -1;
        return dist;
    }
};