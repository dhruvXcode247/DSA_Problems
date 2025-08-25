class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size(),-1);
        stack<int> ins;
        unordered_map<int,int>mpp;

        for (int i=nums2.size()-1;i>=0;i--) {
         while(!ins.empty() && nums2[i]>=ins.top()) {
            ins.pop();
         }
         if (ins.empty()) {
            mpp[nums2[i]]=-1;
         }
         else {
            mpp[nums2[i]]=ins.top();
         }
         ins.push(nums2[i]);
        }
        for (int i=0;i<nums1.size();i++) {
            ans[i]=mpp[nums1[i]];
        }
        return ans;
    }
};