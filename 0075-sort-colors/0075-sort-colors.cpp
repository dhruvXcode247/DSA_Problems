class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,count0=0,count1=0,count2=0;
        for (int k=0;k<nums.size();k++) {
            if (nums[k]==0) count0++;
            if (nums[k]==1) count1++;
            if (nums[k]==2) count2++;
        }
        for (int j=0;j<count0;j++) {
            nums[i]=0;
            i++;
        }
        for (int j=0;j<count1;j++) {
            nums[i]=1;
            i++;
        }
        for (int j=0;j<count2;j++) {
            nums[i]=2;
            i++;
        }
    }
};