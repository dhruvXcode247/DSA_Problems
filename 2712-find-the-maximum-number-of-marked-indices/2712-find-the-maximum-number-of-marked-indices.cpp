class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,n=nums.size(),j=n/2,count=0;
        while (i<n/2 && j<n) {
            if (2*nums[i]<=nums[j]) {
                i++,j++,count+=2;
            }
            else j++;
        }
        return count;
    }
};