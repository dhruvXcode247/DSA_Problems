class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        int mini=INT_MAX,ans;
        sort(nums.begin(),nums.end());
        for (int i=0;i<nums.size()-1;i++) {
            ans=nums[i+1]-nums[i];
            mini=min(mini,ans);
        }
        return mini;
    }
};