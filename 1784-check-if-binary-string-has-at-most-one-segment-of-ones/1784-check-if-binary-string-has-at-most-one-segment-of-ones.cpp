class Solution {
public:
    bool checkOnesSegment(string s) {
        int n=s.size(),cnt=0,i=0;
        while (i<n) {
            if (s[i]=='1') cnt++;
            while (s[i]=='1') i++;
            i++;
        }
        if(cnt>1) return false;
        return true;
    }
};