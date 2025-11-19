class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n=nums.size();
        unordered_set<int>st(nums.begin(),nums.end());
        for (int i=0;i<n;i++) {
            if (st.find(original)!=st.end()) original*=2;
        }
        return original;
    }
};