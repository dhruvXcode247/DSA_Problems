class Solution {
public:
    int minElement(vector<int>& nums) {
        int dig,ele,sum,mini=INT_MAX;
        for (int i=0;i<nums.size();i++) {
            sum=0,ele=nums[i];
            if (ele==0) sum=0;
            else { 
                while(ele>0) {
                    dig=ele%10;
                    ele/=10;
                    sum+=dig;
                }
            }
            nums[i]=sum;
        }
        mini=*min_element(nums.begin(),nums.end());
        return mini;
    }
};