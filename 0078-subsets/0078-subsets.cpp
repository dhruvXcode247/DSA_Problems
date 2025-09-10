class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>finalAns;
        for (int i=0;i<(1<<n);i++) {
            vector<int>ans={};
            for (int j=0;j<n;j++) {
                if (i&(1<<j)) {
                    ans.emplace_back(nums[j]);
                }
            }
            finalAns.emplace_back(ans);
        }
        return finalAns;
    }
};