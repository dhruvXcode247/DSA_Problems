class Solution {
public:
    string minWindow(string s, string t) {
        int l=0,r=0,m=s.size(),n=t.size(),count=0,minLen=INT_MAX,sIndex=-1;
        int mpp[256]={0};
        for (int i=0;i<n;i++) {
            mpp[t[i]]++;
        }
        while(r<m) {
            if(mpp[s[r]]>0) {
                count+=1;
            }
            mpp[s[r]]--;
            while (count==n) {
                if (r-l+1 < minLen) {
                    minLen=r-l+1;
                    sIndex=l;
                } 
                mpp[s[l]]++;
                if (mpp[s[l]]>0) {
                    count-=1;
                }
                l++;
            }
            r+=1;
        }
        return (sIndex==-1)?"":s.substr(sIndex,minLen);
    }
};