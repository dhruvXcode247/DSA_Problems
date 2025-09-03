class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n1=nums.size(),n2;
        vector<int>temp;
        unordered_set<int>st;
        for (int i=0;i<n1;i++) {
            st.insert(nums[i]);
        }
        for (int it:st) {
            temp.emplace_back(it);
        }
        n2=temp.size();
        if (n1!=n2) return true;
        return false;
    }
};