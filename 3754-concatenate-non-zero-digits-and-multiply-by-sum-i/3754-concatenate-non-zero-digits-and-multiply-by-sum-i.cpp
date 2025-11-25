class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0,x=0,num=n;
        while (num>0) {
            if (num%10!=0) x=x*10+(num%10);
            sum+=(num%10);
            num/=10;
        }
        string ans=to_string(x);
        string newAns=ans;
        reverse(newAns.begin(),newAns.end());
        long long number=stoi(newAns);
        return number*sum;
    }
};