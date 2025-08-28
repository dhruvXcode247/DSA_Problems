class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string>st;
        int count=0;
        string rev="";
        for (int i=0;i<words.size();i++) {
            rev=words[i];
            reverse(rev.begin(),rev.end());
            if (st.find(rev)==st.end()){
                st.insert(words[i]);
            }
            else {
                st.erase(words[i]);
                st.erase(rev);
                count++;
            }
        }
        return count;
    }
};