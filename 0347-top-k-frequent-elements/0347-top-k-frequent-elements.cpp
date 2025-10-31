class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        vector<int>ans;
        for (int i=0;i<nums.size();i++) {
            mpp[nums[i]]++;
        }
        while (k>0) {
            int maxi=0,ele=0;
            for (auto it:mpp) {
                if (it.second>maxi) {
                    maxi=it.second;
                    ele=it.first;
                }
            }
            ans.emplace_back(ele);
            mpp.erase(ele);
            k--;
        }
        return ans;
    }
};