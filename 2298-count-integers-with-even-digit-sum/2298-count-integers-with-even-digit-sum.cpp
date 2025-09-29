class Solution {
public:
    int countEven(int num) {
        int count=0;
        for (int i=1;i<=num;i++) {
            int j=i;
            int sum=0;
            while(j>0) {
                int dig=j%10;
                j/=10;
                sum+=dig;
            }
            if (sum%2==0) count++;
        }
        return count;
    }
};