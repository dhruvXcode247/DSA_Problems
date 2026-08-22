class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,pro=1,number=n;
        while(number>0) {
            sum+=number%10;
            number/=10;
        }
        number=n;
        while(number>0) {
            pro*=number%10;
            number/=10;
        }
        if (n%(sum+pro)==0) return true;
        return false;
    }
};