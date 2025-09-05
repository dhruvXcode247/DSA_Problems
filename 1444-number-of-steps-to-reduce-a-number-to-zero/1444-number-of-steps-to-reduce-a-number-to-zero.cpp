class Solution {
public:
    int numberOfSteps(int num) {
        int count=0,ele=num;
        while(ele>0) {
            if (ele%2==0) ele/=2;
            else ele-=1;
            count++;
        }
        return count;
    }
};