class Solution {
public:
    bool checkZero(int num) {
        while(num>0) {
            if (num%10==0) {
                return false;
            }
            num/=10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        for (int i=1;i<n;i++) {
            int a=i;
            int b=n-i;
            if (checkZero(a) && checkZero(b)) {
                return {a,b};
            }
        }
        return {};
    }
};