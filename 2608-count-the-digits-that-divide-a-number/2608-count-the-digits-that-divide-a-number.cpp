class Solution {
public:
    int countDigits(int num) {
        int digit,count=0,number=num;
        while(number>0) {
            digit=number%10;
            number/=10;
            if (num%digit==0) {
                count++;
            }
        }
        return count;
    }
};