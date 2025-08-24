class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sum=0,i;
        if (digits.size()==1) {
            if (digits[0]==9) {
                digits[0]=0;
                digits.insert(digits.begin()+0,1);
                return digits;
            }
            else {
                digits[0]+=1;
                return digits;
            }
        }
        for (i=digits.size()-1;i>=0;i--) {
            sum+=digits[i];
            if (digits[i]==9 && i==0) {
                digits[i]=0;
                digits.insert(digits.begin()+0,1);
                return digits;
            }
            else if (digits[i]==9) {
                digits[i]=0;
                sum+=1;
            }
            else {
                digits[i]+=1;
                sum=0;
                return digits;
            }
        }
        return digits;
    }
};