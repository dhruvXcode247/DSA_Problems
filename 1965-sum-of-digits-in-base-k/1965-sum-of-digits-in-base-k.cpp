class Solution {
public:
    int sumBase(int n, int k) {
        int num=n,number=0;
        while(num>0) {
            number=number+num%k;
            num/=k;
        }
        return number;
    }
};