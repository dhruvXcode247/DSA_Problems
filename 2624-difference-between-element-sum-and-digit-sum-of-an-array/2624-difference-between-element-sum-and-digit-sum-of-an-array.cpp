class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elemSum=0,digSum=0,ele,dig;
        for (int i=0;i<nums.size();i++) {
            elemSum+=nums[i];
        }
        for (int i=0;i<nums.size();i++) {
            if (nums[i]<=9) digSum+=nums[i];
            else {
                ele=nums[i];
                while(ele>0) {
                    dig=ele%10;
                    digSum+=dig;
                    ele/=10;
                }
            }
        }
        return abs(elemSum-digSum);
    }
};