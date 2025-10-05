class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans(nums.size());
        int left=0,right=nums.size()-1,pos=nums.size()-1;
        while(left<=right) {
            if (abs(nums[left])>abs(nums[right])) {
                ans[pos--]=nums[left]*nums[left];
                left++;
            }
            else {
                ans[pos--]=nums[right]*nums[right];
                right--;
            }
        }
        return ans;
    }
};