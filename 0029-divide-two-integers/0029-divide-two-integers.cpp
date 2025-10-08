class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend==divisor) return 1;
        bool sign=true;
        if (dividend<0 && divisor>=0) sign=false;
        else if (dividend>=0 && divisor<0) sign=false;
        long long a=abs((long long)dividend);
        long long b=abs((long long)divisor);
        long quotient=0;
        while(a>=b) {
            int count=0;
            while(a>=(b<<(count+1))) {
                count+=1;
            }
            quotient+=(1<<count);
            a-=b<<count;
            if (quotient==1<<31 && sign) return INT_MAX;
            if (quotient==1<<31 && !sign) return INT_MIN;
        }
        return sign?quotient:-(quotient);
    }
};