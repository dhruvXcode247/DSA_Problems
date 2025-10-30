class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size(),mini=INT_MAX;
        string longest="";
        unordered_set<char>st;
        for (int i=0;i<n;i++) {
            int m=strs[i].size();
            mini=min(mini,m);
        }
        for (int i=0;i<mini;i++) {
            int j=0;
            while (j<n) {
                string s1=strs[j];
                st.insert(s1[i]);
                j++;
            }
            if (st.size()==1) {
                longest+=strs[0][i];
            }
            else {
                break;
            }
            st.clear();
        }
        return longest;
    }
};