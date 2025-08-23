class Solution {
public:
int count;
    int singleNonDuplicate(vector<int>& nums) {
        int beg=0,end=nums.size()-1,mid;
        if (nums.size()==1) return nums[0];
        if (beg==0) {
                if (nums[beg]!=nums[beg+1]) {
                    return nums[beg];
                }
                else {
                    beg++;
                }
            }
            if (end==nums.size()-1) {
                if (nums[end]!=nums[end-1]) {
                    return nums[end];
                }
                else {
                    end--;
                }
            }
        while(beg<=end) {
            mid=(beg+end)/2;
            if (nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]) return nums[mid];
            if ((mid%2==1 && nums[mid]==nums[mid-1]) || (mid%2==0 && nums[mid+1]==nums[mid])){
                beg=mid+1;
            }
            else {
                end=mid-1;
            }
        }
        return -1;
    }
};