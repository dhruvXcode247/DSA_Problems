class Solution {
public:
    int alternateDigitSum(int n) {
        int sum=0,ele;
        string answer=to_string(n);
        for (int i=0;i<answer.size();i++) {
            ele=answer[i]-'0';
            if (i%2==0) {
                sum+=ele;
            }
            else {
                sum-=ele;
            }
        }
        return sum;
    }
};