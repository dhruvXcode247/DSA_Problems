class Solution {
public:
    void subsequences(vector<int>&nums,vector<vector<int>>&ans,vector<int>&temp,int index) {
        ans.emplace_back(temp);
        for (int i=index;i<nums.size();i++) {
            if (i!=index && nums[i]==nums[i-1]) continue;
            temp.emplace_back(nums[i]);
            subsequences(nums,ans,temp,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        subsequences(nums,ans,temp,0);
        return ans;
    }
};