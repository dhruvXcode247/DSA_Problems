class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<int>temp;
        for(int i=1;i<=num/2;i++) {
            if (num%i==0) temp.emplace_back(i); 
        }
        if (num==accumulate(temp.begin(),temp.end(),0)) return true;
        return false;
    }
};