class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_set<int>st(nums[0].begin(),nums[0].end());
        for (int i=1;i<nums.size();i++) {
            unordered_set<int>temp(nums[i].begin(),nums[i].end());
            for (auto it=st.begin();it!=st.end();) {
                if (temp.find(*it)==temp.end()) it=st.erase(it);
                else it++;
            }
        }
        vector<int>result(st.begin(),st.end());
        sort (result.begin(),result.end());
        return result;
    }
};