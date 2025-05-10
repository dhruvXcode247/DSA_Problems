class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int beg=0,end=nums.size()-1,mid,first=-1,last=-1;
        while (beg<=end) {
            mid=(beg+end)/2;
            if (nums[mid]==target) {
                first=mid;
                end=mid-1;
            }
            else if (nums[mid]<target) {
                beg=mid+1;
            }
            else {
                end=mid-1;
            }
        }
        beg=0,end=nums.size()-1;
        while (beg<=end) {
            mid=(beg+end)/2;
            if (nums[mid]==target) {
                last=mid;
                beg=mid+1;
            }
            else if (nums[mid]<target) {
                beg=mid+1;
            }
            else {
                end=mid-1;
            }
        }
        return {first,last};
    }
};