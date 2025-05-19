class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1,mid;
        while (low<=high) {
            mid=(low+high)/2;
            if (target==nums[mid]) return true;
            if (nums[low]==nums[mid] && nums[mid]==nums[high]) {
                low=low+1;
                high=high-1;
                continue;
            }
            if (nums[low]<=nums[mid]) {
                if (nums[low]<=target && target<=nums[mid]) {
                    high=mid-1;
                }
                else {
                    low=mid+1;
                }
            }
            else {
                if (target>=nums[mid] && target<=nums[high]){
                    low=mid+1;
                }
                else {
                    high=mid-1;
                }
            }
        }
        return false;
    }
};