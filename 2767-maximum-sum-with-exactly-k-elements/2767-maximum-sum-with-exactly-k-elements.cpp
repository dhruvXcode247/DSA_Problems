class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int sum=0,maxi=INT_MIN;
        for (int i=0;i<k;i++) {
            int maxi=*max_element(nums.begin(),nums.end());
            for  (int j=0;j<nums.size();j++) {
                if (nums[j]==maxi) {
                    sum+=nums[j];
                    nums[j]+=1;
                    break;
                }
            }
        }
        return sum;
    }
};