class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum=0,digitsum=0;
        int num=n,number=n;
        while (num>0) {
            digitsum+=(num%10);
            num/=10;
        }
        while (number>0) {
            sum+=(number%10)*(number%10);
            number/=10;
        }
        if (sum-digitsum>=50) return true;
        return false;
    }
};