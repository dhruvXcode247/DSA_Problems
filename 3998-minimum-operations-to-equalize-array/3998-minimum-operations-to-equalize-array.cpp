class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int start=nums[0];
        for (int i=1;i<n;i++) {
            start=start&nums[i];
        }
        int count=0;
        int current_and=-1;
        for (int i=0;i<n;i++) {
            current_and=current_and&nums[i];
            if (current_and==start) {
                count++;
                current_and=-1;
            }
        }
        return min(n-count,1);
    }
};