class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int number=0,count;
        for (int i=0;i<32;i++) {
            count=0;
            for (int j=0;j<nums.size();j++) {
                if (nums[j]&(1<<i)) count++;
            }
            if (count%3==1) {
                number=number|(1<<i);
            }
        }
        return number;
    }
};