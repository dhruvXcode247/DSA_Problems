class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string>st;
        int n=s.size(),total=1<<k,r=0;
        while (r<=n-k) {
            st.insert(s.substr(r,k));
            r++;
        }
        if (st.size()==total) return true;
        return false;
    }
};