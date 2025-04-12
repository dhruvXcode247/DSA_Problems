class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp;
        for (int i=0;i<n;i++) {
            if (nums[i]!=0) {
                temp.push_back(nums[i]);
            }
        }
        int t=temp.size();
        for (int i=0;i<t;i++) {
            nums[i]=temp[i];
        }
        for (int i=t;i<n;i++) {
            nums[i]=0;
        }
      }
};