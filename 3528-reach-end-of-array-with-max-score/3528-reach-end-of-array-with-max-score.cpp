class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
        int maxi=nums[0],idx;
        long long totalScore=0;
        for (int i=1;i<nums.size();i++) {
            totalScore+=maxi;
            maxi=max(maxi,nums[i]);
        }
        return totalScore;
    }
};