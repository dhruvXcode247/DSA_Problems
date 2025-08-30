class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        vector<int>ans(nums.size(),-1);
        for (int i=2*nums.size()-1;i>=0;i--) {
            while(!st.empty() && nums[i%nums.size()]>=st.top()) {
                st.pop();
            }
            if (i<nums.size()){
                ans[i]=st.empty()?-1:st.top();
            }
            st.push(nums[i%nums.size()]);
        }
        return ans;
    }
}; 