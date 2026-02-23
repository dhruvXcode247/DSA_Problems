class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string>st;
        int n=s.size(),total=1<<k,cnt=0,l=0,r=0,steps=0;
        string temp="";
        while (r<n) {
            temp+=s[r];
            steps++;
            if (steps==k) {
                st.insert(temp);
                steps--;
                temp.erase(0,1);
                l++;
            }
            r++;
        }
        if (st.size()==total) return true;
        return false;
    }
};