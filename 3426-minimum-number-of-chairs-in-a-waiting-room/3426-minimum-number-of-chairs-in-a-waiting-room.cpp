class Solution {
public:
    int minimumChairs(string s) {
        int count=0,maxChairs=0;
        for (int i=0;i<s.size();i++) {
            if (s[i]=='E') count++;
            else count--;
            maxChairs=max(count,maxChairs);
        }
        return maxChairs;
    }
};