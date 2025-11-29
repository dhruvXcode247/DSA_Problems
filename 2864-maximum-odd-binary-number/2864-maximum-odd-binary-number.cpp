class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int cnt=0;
        string ans(s.size(),'0');
        for (auto it:s) {
            if (it=='1') cnt++;
        }
        int i=0;
        while (cnt-1) {
            ans[i]='1';
            i++;
            cnt--;
        }
        while (i<s.size()-1) {
            ans[i]='0';
            i++;
        }
        ans[i]='1';
        return ans;
    }
};