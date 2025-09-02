class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n=nums.size(),countEven=0;
        for (int i=0;i<n;i++) {
            if (nums[i]%2==0) countEven++;
        }
        for (int i=0;i<n;i++) {
            if (countEven>0) nums[i]=0;
            else nums[i]=1;
            countEven--;
        }
        return nums;
    }
};