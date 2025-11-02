class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size(),ele=0,total=0;
        for (int i=0;i<n;i++) {
            ele^=nums[i];
        }
        for (int i=0;i<=n;i++) {
            total^=i;
        }
        return total^ele;
    }
};