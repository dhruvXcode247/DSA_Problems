class Solution {
public:
    long long coloredCells(int n) {
        if (n==1) return 1;
        return 2LL*n*(n-1)+1;
    }
};