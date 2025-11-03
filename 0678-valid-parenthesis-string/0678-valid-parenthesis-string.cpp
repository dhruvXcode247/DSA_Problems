class Solution {
public:
    bool checkValidString(string s) {
        int n=s.size(),i=0,mini=0,maxi=0;
        while (i<n) {
            if (s[i]=='(') {
                mini++;
                maxi++;
            }
            else if (s[i]==')') {
                mini--;
                maxi--;
            }
            else {
                mini--;
                maxi++;
            }
            if (mini<0) mini=0;
            if (maxi<0) return false;
            i++;
        }
        return (mini==0);
    }
};