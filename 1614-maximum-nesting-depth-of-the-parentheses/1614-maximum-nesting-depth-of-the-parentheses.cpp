class Solution {
public:
    int maxDepth(string s) {
        int n=s.size(),cnt=0,maxi=INT_MIN;

        for (int i=0;i<n;i++) {
            maxi=max(maxi,cnt);
            if (s[i]=='(') {
                cnt++;
            }
            else if (s[i]==')') cnt--;
        }
        return maxi;
    }
};