class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        int n=s1.size(),m=s2.size();
        if (n!=m) return false;
        string eve1="",eve2="",odd1="",odd2="";
        for (int i=0;i<n;i++) {
            if (i%2==0) {
                eve1+=s1[i];
                eve2+=s2[i];
            }
            else {
                odd1+=s1[i];
                odd2+=s2[i];
            }
        }
        sort(odd1.begin(),odd1.end());
        sort(eve1.begin(),eve1.end());
        sort(odd2.begin(),odd2.end());
        sort(eve2.begin(),eve2.end());
        if (eve1==eve2 && odd1==odd2) return true;
        return false;
    }
};