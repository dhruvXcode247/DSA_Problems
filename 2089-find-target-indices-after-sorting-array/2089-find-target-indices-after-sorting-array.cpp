class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>temp;
        for (int i=0;i<nums.size();i++) {
            if (nums[i]==target) temp.emplace_back(i);
        }
        return temp;
    }
};