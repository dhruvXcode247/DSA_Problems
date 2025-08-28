class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singleDig=0,doubleDig=0;
        for (int i=0;i<nums.size();i++) {
            if (nums[i]<=9) {
                singleDig+=nums[i];
            }
            else doubleDig+=nums[i];
        }
        if (singleDig==doubleDig) return false;
        return true;
    }
};