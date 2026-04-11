class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int>temp1,temp2;
        int n=nums1.size(),m=nums2.size();
        unordered_set<int>s1(nums1.begin(),nums1.end()),s2(nums2.begin(),nums2.end());
        for (auto it:s1) {
            if (s2.find(it)==s2.end()) {
                temp1.emplace_back(it);
            }
        }
        for (auto it:s2) {
            if (s1.find(it)==s1.end()) {
                temp2.emplace_back(it);
            }
        }
        return {temp1,temp2};
    }
};