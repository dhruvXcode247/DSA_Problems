class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int beg=0,end=nums.size()-1,mid;
        while (beg<=end) {
            mid=(beg+end)/2;
            if(nums[mid]==target) {
                return mid;
            }
            else if (nums[mid]<target) {
                beg=beg+1;
            }
            else {
                end=end-1;
            }
        }
        return beg;
    }
};