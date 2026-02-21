class Solution {
public:
    bool isprime(int n) {
        if (n<=1) return false;
        if (n<=3) return true;
        if (n%2==0 || n%3==0) return false;
        for (int i=5;i<sqrt(n);i++) {
            if (n%i==0) return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int prime=0,cnt;
        while (left<=right) {
            cnt=0;
            for (int i=0;i<32;i++) {
                if (left&(1<<i)) cnt++;
            }
            if (isprime(cnt)) prime++;
            left++;
        }
        return prime;
    }
};