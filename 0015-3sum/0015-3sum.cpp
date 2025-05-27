class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0,j,k;
        vector<vector<int>>ans;
        for (int i=0;i<nums.size();i++) {
            if (i>0 && nums[i]==nums[i-1]) continue;
            j=i+1;
            k=nums.size()-1;
            while(j<k) {
                sum=nums[i]+nums[j]+nums[k];
                if (sum<0) {
                    j++;
                }
                else if (sum>0) {
                    k--;
                }
                else {
                    vector<int>temp={nums[i],nums[j],nums[k]};
                    ans.emplace_back(temp);
                    j++;
                    k--;
                    while (j<k && nums[j]==nums[j-1]) j++;
                    while (j<k && nums[k]==nums[k+1]) k--;
                }
            }
        }
        return ans;
    }
};