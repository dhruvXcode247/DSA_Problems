class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count=0;
        for (int i=1;i<nums.size();i++) {
            while (nums[i]<=nums[i-1]) {
                nums[i]++;
                count++;
            }
        }
        return count;
    }
};