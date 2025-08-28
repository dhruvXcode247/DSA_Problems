class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count,realCount=0,ele;
        for (int i=0;i<nums.size();i++) {
            count=0;
            ele=nums[i];
            while(ele>0) {
                ele/=10;
                count++;
            }
            if (count%2==0) realCount++;
        }
        return realCount;
    }
};