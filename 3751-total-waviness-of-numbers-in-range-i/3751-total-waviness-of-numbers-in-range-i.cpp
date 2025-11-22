class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int sum=0;
        for (int i=num1;i<=num2;i++) {
            string s=to_string(i);
            if (s.size()<3) continue;
            for (int i=1;i<s.size()-1;i++) {
                if ((s[i]>s[i-1] && s[i]>s[i+1]) || (s[i]<s[i-1] && s[i]<s[i+1])) sum++;
            }
        }
        return sum;
    }
};