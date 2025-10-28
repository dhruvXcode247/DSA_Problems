class Solution {
public:
    int Bits(int i) {
        int count=0;
        while (i>1) {
            if (i%2==1) count++;
            i=i>>1;
        }
        if (i==1) count++;
        return count;
    }
    vector<int> countBits(int n) {
        int i=0;
        vector<int>ans(n+1);
        while (i<=n) {
            if (i==0) ans[i]=0;
            else if (i==1) ans[i]=1;
            else ans[i]=(Bits(i));
            i++;
        }
        return ans;
    }
};