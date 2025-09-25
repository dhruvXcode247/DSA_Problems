class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n=nums.size();
        unordered_set<int>st;
        for (int i=0;i<n;i++) {
            for (int j=0;j<n;j++) {
                if (abs(i-j)<=k && nums[j]==key) {
                    st.insert(i); break;
                }
            }
        }
        vector<int>ans(st.begin(),st.end());
        sort(ans.begin(),ans.end());
        return ans;
    }
};