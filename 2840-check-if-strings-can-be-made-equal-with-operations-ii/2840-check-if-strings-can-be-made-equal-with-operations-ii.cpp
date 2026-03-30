class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int n=s1.size(),m=s2.size();
        if (n!=m) return false;
        char eve[26]={0},odd[26]={0};
        for (int i=0;i<n;i++) {
            if (i%2==0) {
                eve[s1[i]-'a']++;
                eve[s2[i]-'a']--;
            }
            else {
                odd[s1[i]-'a']++;
                odd[s2[i]-'a']--;
            }
        }
        for (int i=0;i<26;i++) {
            if (eve[i]!=0 || odd[i]!=0) {
                return false;
            }
        }
        return true;
    }
};