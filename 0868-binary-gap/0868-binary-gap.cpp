class Solution {
public:
    int binaryGap(int n) {
        int gap=0,cnt=0,idx=0;
        for (int i=0;i<32;i++) {
            if (n&(1<<i)) {
                cnt++;
                if (cnt==1) {
                    idx=i;
                    continue;
                }
                else {
                    gap=max(gap,i-idx);
                    idx=i;
                }
            }
        }
        return gap;
    }
};