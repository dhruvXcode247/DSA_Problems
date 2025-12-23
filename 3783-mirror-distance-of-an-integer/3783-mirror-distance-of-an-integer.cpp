class Solution {
public:
    int mirrorDistance(int n) {
        int num=n,number=0;
        while (num>0) {
            number=number*10+num%10;
            num/=10;
        }
        return abs(number-n);
    }
};