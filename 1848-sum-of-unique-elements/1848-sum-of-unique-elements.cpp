class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        unordered_map<int,int>mpp;
        for (int i=0;i<nums.size();i++) {
           mpp[nums[i]]++;
        }
        for (int i=0;i<nums.size();i++) {
            if (mpp[nums[i]]==1) sum+=nums[i];
        }
        return sum;
    }
};