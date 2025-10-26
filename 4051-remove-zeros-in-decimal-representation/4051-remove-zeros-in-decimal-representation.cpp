class Solution {
public:
    long long removeZeros(long long n) {
        long long num=0,i=1;
        while(n>0) {
            if (n%10>0) {
                num=num+i*(n%10);
                i*=10;
            }
            n/=10;
        }
        return num;
    }
};