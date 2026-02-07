class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.size(),count_b=0,res=0;
        for (int i=0;i<n;i++) {
            if (s[i]=='b') {
                count_b++;
            }
            else {
                if (count_b>0) {
                    res++;
                    count_b--;
                }
            }
        }
        return res;
    }
};