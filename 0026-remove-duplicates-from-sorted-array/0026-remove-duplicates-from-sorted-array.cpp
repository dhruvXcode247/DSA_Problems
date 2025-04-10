class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mpp;
        for (int i=0;i<nums.size();i++) {
            mpp[nums[i]]++;
        }
        nums.clear();
        for (auto it:mpp) {
            nums.emplace_back(it.first);
        }
        return nums.size();
    }
};