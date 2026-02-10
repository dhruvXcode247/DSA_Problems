class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n=nums.size(),l=0,r=0,maxlen=0;
        for (int i=0;i<n;i++) {
            unordered_set<int>st;
            int eve=0,odd=0;
            for (int j=i;j<n;j++) {
                if (!st.count(nums[j])) {
                    st.insert(nums[j]);
                    if (nums[j]%2==0) {
                        eve++;
                    }
                    else odd++;
                }
                if (eve==odd) {
                    maxlen=max(maxlen,j-i+1);
                }
            }
        }
        return maxlen;
    }
};