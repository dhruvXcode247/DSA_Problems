class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
     while (i<nums.size()) {
        for (int j=i+1;j<nums.size();j++) {
            if (nums[j]+nums[i]==target) {
                return {i,j};
            }
        }
        i++;
     }
        return {};
    }
};