class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_multiset<char>st;
        for (int i=0;i<s.size();i++) {
            st.insert(s[i]);
        }
        for (int i=0;i<t.size();i++) {
            auto it=st.find(t[i]);
            if (st.find(t[i])!=st.end()) st.erase(it);
            else return t[i];
        }
        return ' ';
    }
};