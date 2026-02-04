class Solution {
public:
    int length(int i, int j, vector<int>&nums1, vector<int>&nums2,vector<vector<int>>&dp) {
        if (i<0 || j<0) {
            return 0;
        }
        if (dp[i][j]!=-1) return dp[i][j];
        if (nums1[i]==nums2[j]) return dp[i][j]=1+length(i-1,j-1,nums1,nums2,dp);
        return dp[i][j]=0;
    }
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size(),ans=0;
        vector<vector<int>>dp(n,vector<int>(m,-1));
        for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {
                ans=max(ans,length(i,j,nums1,nums2,dp));
            }
        }
        return ans;
    }
};