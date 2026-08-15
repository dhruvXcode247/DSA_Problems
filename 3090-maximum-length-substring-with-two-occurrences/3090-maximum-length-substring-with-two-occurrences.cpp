class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size(),i=0,j=0,res=0;
        unordered_map<char,int>mpp;

        while (j<n) {
            mpp[s[j]]++;

            while (mpp[s[j]]>2) {
                mpp[s[i]]--;
                i++;
            }

            res=max(res,j-i+1);
            j++;
        }
        return res;
    }
};