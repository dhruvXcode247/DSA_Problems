class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        for (int i=0;i<n;i++) {
            if (count(nums.begin(),nums.end(),nums[i])==1) {
                return nums[i];
            }
        }
        return -1;
    }
};