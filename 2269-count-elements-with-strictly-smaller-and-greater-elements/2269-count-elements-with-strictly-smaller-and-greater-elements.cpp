class Solution {
public:
    int countElements(vector<int>& nums) {
        int count=0,n=nums.size(),i=0;
        int mini=*min_element(nums.begin(),nums.end());
        int maxi=*max_element(nums.begin(),nums.end());
        while (i<n) {
            if ((nums[i]>mini) && (nums[i]<maxi)) {
                count++;
            }
            i++;
        }
        return count;
    }
};