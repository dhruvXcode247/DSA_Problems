class Solution {
public:
    int maxProduct(int n) {
        int maxi=0,secmaxi=0;
        while (n>0) {
            int d=n%10;
            if (d>=maxi) {
                secmaxi=maxi;
                maxi=d;
            }
            else if (d>secmaxi) {
                secmaxi=d;
            }
            n/=10;
        }
        return maxi*secmaxi;
    }
};