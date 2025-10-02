class Solution {
public:
    void permutations(vector<int>&nums,vector<vector<int>>&ans,vector<int>temp,vector<bool>&visited) {
        if (visited.size()==temp.size()) {
            ans.emplace_back(temp);
            return;
        }
        for (int i=0;i<nums.size();i++) {
            if (visited[i]==0) {
                visited[i]=1;
                temp.emplace_back(nums[i]);
                permutations(nums,ans,temp,visited);
                visited[i]=0;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        vector<vector<int>>ans;
        vector<bool>visited(n);
        permutations(nums,ans,temp,visited);
        return ans;
    }
};