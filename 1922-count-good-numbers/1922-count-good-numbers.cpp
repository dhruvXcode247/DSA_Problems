class Solution {
public:
int MOD=1e9+7;
    long long findPower(long long a, long long b) {
        if (b==0) return 1;
        long long half=findPower(a,b/2);
        long long result=(half*half)%MOD;
        
        if (b%2) result=(result*a)%MOD;
        return result;
    }

    int countGoodNumbers(long long n) {
        long long eve=(n+1)/2,odd=n/2;
        return findPower(5,eve)*findPower(4,odd)%MOD;
    }
};