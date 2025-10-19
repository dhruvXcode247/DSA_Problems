class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>st;
        for (int i=0;i<nums.size();i++) {
            st.insert(nums[i]);
        }
        int maxi=*max_element(nums.begin(),nums.end()),i=k;
        while(i<maxi+1000) {
            if (st.find(i)==st.end()) return i;
            i+=k;
        }
        return -1;
    }
};