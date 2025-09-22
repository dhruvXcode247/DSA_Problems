class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int ans1=-1,ans2=-1,n=nums.size();
        unordered_map<int,int>mpp;
        for (int i=0;i<n;i++) {
            mpp[nums[i]]++;
            if (mpp[nums[i]]==2 && ans1==-1) ans1=nums[i];
            else if (mpp[nums[i]]==2) ans2=nums[i];
        }
        return {ans1,ans2};
    }
};