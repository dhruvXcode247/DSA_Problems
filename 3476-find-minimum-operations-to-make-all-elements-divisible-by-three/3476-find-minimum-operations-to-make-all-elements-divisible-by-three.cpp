class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        for (int i=0;i<nums.size();i++) {
            if (nums[i]%3==1) {
                count++;
            }
            else {
                if (nums[i]%3!=0) {
                    nums[i]+=1;
                    count++;
                }
            }
        }
        return count;
    }
};