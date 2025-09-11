class Solution {
public:
    string sortVowels(string s) {
        multiset<char>st;
        for (int i=0;i<s.size();i++) {
            if (tolower(s[i])=='a' || tolower(s[i])=='e' ||tolower(s[i])=='i' ||
            tolower(s[i])=='o' ||tolower(s[i])=='u') {
                st.insert(s[i]);
            }
        }
        auto it=st.begin();
        for (int i=0;i<s.size();i++) {
            if (tolower(s[i])=='a' || tolower(s[i])=='e' ||tolower(s[i])=='i' ||
            tolower(s[i])=='o' ||tolower(s[i])=='u') {
                s[i]=*it;
                it++;
            }
        }
        return s;
    }
};