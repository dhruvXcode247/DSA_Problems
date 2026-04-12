class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m=word1.size(),n=word2.size();
        string ans="";
        int loop=min(m,n);
        for (int i=0;i<loop;i++) {
            ans+=word1[i];
            ans+=word2[i];
        }
        if (m<n) {
            for (int i=loop;i<n;i++) {
                ans+=word2[i];
            }
        }
        else {
            for (int i=loop;i<m;i++) {
                ans+=word1[i];
            }
        }
        return ans;
    }
};