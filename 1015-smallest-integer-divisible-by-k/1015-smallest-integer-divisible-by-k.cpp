class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int cnt=1,n=1;
        if (n%k==0) return cnt;
        if (k%2==0 || k%5==0) return -1;
        while (n%k!=0 && cnt<=k) {
            cnt++;
            n=((n*10)+1)%k;
        }
        return n%k==0?cnt:-1;
    }
};