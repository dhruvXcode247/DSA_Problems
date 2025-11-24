class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int answer=0,n=nums.size(),multi=1;
        vector<bool>ans(n);
        vector<int>values(n);
        for (int i=0;i<n;i++) {
            answer=(answer*2+nums[i])%5;
            values[i]=answer;
        }
        for (int i=0;i<n;i++) {
            if (values[i]==0) ans[i]=true;
            else ans[i]=false;
        }
        return ans;
    }
};