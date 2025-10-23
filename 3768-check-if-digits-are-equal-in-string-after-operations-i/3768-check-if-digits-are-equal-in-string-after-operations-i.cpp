class Solution {
public:
    bool hasSameDigits(string s) {
        while (s.size()>2) {
            string s1(s.size()-1,'0');
            int n=s.size(),i=0;
            while (i<n-1) {
                s1[i]=(((s[i]-'0')+(s[i+1]-'0'))%10);
                i++;
            }
            s=s1;
        }
        if (s[0]==s[1]) return true;
        return false;
    }
};