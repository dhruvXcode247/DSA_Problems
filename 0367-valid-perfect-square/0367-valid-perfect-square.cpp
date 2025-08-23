class Solution {
public:
    bool isPerfectSquare(int num) {
        int beg=0,end=num;
        long long mid;
        while (beg<=end) {
            mid=(beg+end)/2;
            if (mid*mid==num) return true;
            else if (mid*mid<num) beg=mid+1;
            else end=mid-1;
        }
        return false;
    }
};