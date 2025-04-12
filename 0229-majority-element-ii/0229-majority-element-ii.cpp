class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> elements;
        map<int,int>mpp;
        for (int i=0;i<nums.size();i++) {
            mpp[nums[i]]++;
        }
        for (auto it:mpp) {
            if (it.second>nums.size()/3) {
                elements.emplace_back(it.first);
            }
        }
        return elements;
    }
};