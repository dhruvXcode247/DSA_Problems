class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xorr=0;
        for (int i=0;i<nums.size();i++) {
            xorr^=nums[i];
        }
        if (xorr!=0) return nums.size();
        if (nums.size()==1) return 0;
        int count=0;
        for (int i:nums) {
            if (i!=0) count++;
        }
        if (count==0) return 0;
        return nums.size()-1;
    }
};