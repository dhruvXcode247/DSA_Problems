class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd=0,sumEven=0,num1=1,num2=2;
        for (int i=0;i<n;i++) {
            sumOdd+=num1;
            num1+=2;
        }
        for (int i=0;i<n;i++) {
            sumEven+=num2;
            num2+=2;
        }
        return gcd(sumOdd,sumEven);
    }
};