class Solution {
public:
    int smallestNumber(int n, int t) {
        int num=n,pro;
        while (true) {
            pro=1;
            int number=num;
            while(number>0) {
                pro=pro*(number%10);
                number/=10;
            }
            if (pro%t==0) return num;
            num++;
        }
        return num;
    }
};