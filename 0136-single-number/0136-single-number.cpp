class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorOperation=0;
        for (int i=0;i<nums.size();i++) {
            xorOperation=xorOperation^nums[i];
        }
        return xorOperation;
    }
};