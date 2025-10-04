class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int boundary=0,count=0,step=0;
        for (int i=0;i<nums.size();i++) {
            step+=nums[i];
            if (step==boundary) count++;
        }
        return count;
    }
};