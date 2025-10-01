class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int>st;
        vector<int>answer;
        for(int i=0;i<nums.size();i++) {
            st.insert(nums[i]);
        }
        for (int i=1;i<=nums.size();i++) {
            if (st.find(i)==st.end()) answer.emplace_back(i); 
        }
        return answer;
    }
};