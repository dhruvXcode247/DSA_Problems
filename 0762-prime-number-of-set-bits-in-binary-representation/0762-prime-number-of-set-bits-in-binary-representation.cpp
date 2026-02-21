class Solution {
public:
    bool isprime(int n) {
        if (n<=1) return false;
        for (int i=2;i*i<=n;i++) {
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