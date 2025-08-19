class Solution {
public:
    int scoreOfString(string s) {
       int first,second;
        int sum=0;
        for (int i=0;i<s.size()-1;i++) {
            first=s[i]-'\0';
            second=s[i+1]-'\0';
            sum+=abs(first-second);
        }
        return sum;
    }
};