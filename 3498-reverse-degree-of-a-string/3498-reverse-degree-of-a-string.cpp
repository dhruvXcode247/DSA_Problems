class Solution {
public:
    int reverseDegree(string s) {
        int sum=0,n=s.size();

        for (int i=1;i<=n;i++) {
            sum+=i*(26-(s[i-1]-'a'));
        }

        return sum;
    }
};