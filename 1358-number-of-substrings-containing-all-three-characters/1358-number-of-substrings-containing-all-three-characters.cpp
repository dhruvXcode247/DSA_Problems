class Solution {
public:
    int numberOfSubstrings(string s) {
        int count=0,lastseen[]={-1,-1,-1},n=s.size();
        for (int i=0;i<n;i++) {
            lastseen[s[i]-'a']=i;
            if (lastseen[0]!=-1 && lastseen[1]!=-1 && lastseen[2]!=-1)
            count=count+1+min(lastseen[0],min(lastseen[1],lastseen[2]));
        }
        return count;
    }
};