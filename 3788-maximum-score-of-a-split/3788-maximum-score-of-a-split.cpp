class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        long long score=INT_MIN,n=nums.size(),sum=0;
        int mini=INT_MAX;
        for (int i=0;i<n;i++) {
            sum+=nums[i];
        }
        for (int i=n-1;i>=1;i--) {
            sum-=nums[i];
            mini=min(mini,nums[i]);
            long long diff=sum-mini;
            score=max(score,diff);
        }
        return score;
    }
};