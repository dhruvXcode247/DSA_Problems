class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n1=nums.size(),n2;
        unordered_set<int>st;
        for (int i=0;i<n1;i++) {
            st.insert(nums[i]);
        }
        nums.clear();
        for (int it:st) {
            nums.emplace_back(it);
        }
        n2=nums.size();
        if (n1!=n2) return true;
        return false;
    }
};