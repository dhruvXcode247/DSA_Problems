class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int maxi=INT_MIN;
        long long sum=0;
        vector<long long>ans,conver(nums.size());
        for (int i=0;i<nums.size();i++) {
            maxi=max(maxi,nums[i]);
            conver[i]=nums[i]+maxi;
            sum+=conver[i];
            ans.emplace_back(sum);
        }
        return ans;
    }
};