class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n=word.size(),cnt=0;
        unordered_set<char>st;
        for (auto it:word) {
            st.insert(it);
        }
        for (auto it:st) {
            if (islower(it) &&
                st.find(toupper(it))!=st.end()) {
                    cnt++;
            }
        }
        return cnt;
    }
};