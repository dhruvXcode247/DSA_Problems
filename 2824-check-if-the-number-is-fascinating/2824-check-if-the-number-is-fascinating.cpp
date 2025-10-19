class Solution {
public:
    bool isFascinating(int n) {
        int secNum=2*n,thirdNum=3*n;
        int count[10]={0};
        string num=to_string(n)+to_string(secNum)+to_string(thirdNum);
        for (char c:num) {
            int d=c-'0';
            if (d==0) return false;
            count[d]++;
            if (count[d]>1) return false;
        }
        return true;
    }
};