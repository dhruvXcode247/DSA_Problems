class Solution {
public:
    void subsequences(vector<int>&nums,vector<vector<int>>
    &ans,vector<int>&temp,int start,int n) {
        if (start==n) {
            ans.push_back(temp);
            return;
        }
        subsequences(nums,ans,temp,start+1,n);
        temp.emplace_back(nums[start]);
        subsequences(nums,ans,temp,start+1,n);
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size(),start=0;
        vector<int>temp;
        vector<vector<int>>ans;
        subsequences(nums,ans,temp,start,n);
        return ans;
    }
};