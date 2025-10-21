class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int sum=0,total=nums[0].size(),maxi,i,j;
        for (int k=0;k<nums.size();k++) {
            sort(nums[k].begin(),nums[k].end());
        }
        for (i=0;i<total;i++) {
            maxi=0;
            for (j=0;j<nums.size();j++) {
                if (maxi<nums[j][i]) {
                    maxi=nums[j][i];
                }
            }
            sum+=maxi;
        }
        return sum;
    }
};