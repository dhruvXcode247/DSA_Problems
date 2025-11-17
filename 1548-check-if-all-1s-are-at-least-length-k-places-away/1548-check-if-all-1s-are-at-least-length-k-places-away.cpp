class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n=nums.size(),idx=-1;
        for (int i=0;i<n;i++) {
            if (nums[i]==1 && idx==-1) {
                idx=i;
            }
            else if (nums[i]==1 && idx!=-1) {
                if (i-idx-1<k) return false;
                idx=i;
            }
        }
        return true;
    }
};