class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char>st;
        int n=text.size(),count=0;
        for (int i=0;i<brokenLetters.size();i++) {
            st.insert(brokenLetters[i]);
        }
        int i=0;
        while(i<n) {
            bool broken=false;
            while(i<n && text[i]!=' '){
                if (st.find(text[i])!=st.end()) {
                    broken=true;
                }
                i++;
            }
            if (!broken) count++;
            i++;
        }
        return count;
    }
};