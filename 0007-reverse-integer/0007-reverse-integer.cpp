class Solution {
public:
    int reverse(int x) {
        int rev=0,r,num=x;
        while (num!=0) {
            r=num%10;
            num=num/10;
            if (rev>INT_MAX/10 || rev<INT_MIN/10) {
                return 0;
            }
            rev=rev*10+r;
        }
        return rev;
    }
};