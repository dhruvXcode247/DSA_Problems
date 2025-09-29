class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum=0,maxi,multi,n;
        for (int i=0;i<nums.size();i++) {
            int num=nums[i];
            maxi=INT_MIN;
            while(num>0) {
                int dig=num%10;
                maxi=max(maxi,dig);
                num/=10;
            }
            num=nums[i];
            multi=1;
            n=0;
            while(num>0) {
                n+=maxi*multi;
                multi*=10;
                num/=10;
            }
            sum+=n;
        }
        return sum;
    }
};