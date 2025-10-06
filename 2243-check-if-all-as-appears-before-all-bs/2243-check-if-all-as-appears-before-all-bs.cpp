class Solution {
public:
    bool checkString(string s) {
        bool check;
        for (int i=0;i<s.size();i++) {
            if (s[i]=='b'){
                if (i<s.size() && s[i+1]=='a') return false;
                check=true;
            }
        }
        return check;
    }
};