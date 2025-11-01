class Solution {
public:
    int countElements(vector<int>& nums) {
        int count=0,n=nums.size(),i=1;
        sort(nums.begin(),nums.end());
        while (i<n) {
            if ((nums[i]>nums[0]) && (nums[i]<nums[n-1])) {
                count++;
            }
            i++;
        }
        return count;
    }
};