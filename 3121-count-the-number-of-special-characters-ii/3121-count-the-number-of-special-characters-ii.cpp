class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n=word.size(),cnt=0;
        unordered_map<char,int>mpp;
        for (int i=0;i<n;i++) {
            if (islower(word[i])) {
                mpp[word[i]]=i;
            }
            else {
                if (mpp.find(word[i])==mpp.end()) {
                    mpp[word[i]]=i;
                }
            }
        }
        for (auto it:mpp) {
            if (islower(it.first) && mpp.find(toupper(it.first))!=mpp.end()) {
                if(it.second<mpp[toupper(it.first)]) cnt++;
            }
        }
        return cnt;
    }
};