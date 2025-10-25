class Solution {
public:
    int totalMoney(int n) {
        int i=1,mon=0,amount=0;
        while(i<=n) {
            if (i%7==1) {
                mon++;
                amount+=mon;
            }
            else if (i%7==0) {
                amount+=mon+6;
            }
            else {
                amount+=mon+(i%7)-1;
            }
            i++;
        }
        return amount;
    }
};