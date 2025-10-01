class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size(),m=2*n;
        unordered_map<int,int>arr;
        for (int i=0;i<nums.size();i++) {
            arr[nums[i]]++;
        }
        for (int i=0;i<nums.size();i++) {
            if (arr[nums[i]]==nums.size()/2) return nums[i];
        }
        return -1;
    }
};