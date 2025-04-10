class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int> temp(n-k);
        for (int i=0;i<n-k;i++) {
          temp[i]=nums[i];
        }
        for (int i=n-k;i<n;i++) {
            nums[i-n+k]=nums[i];
        }
        for (int i=k;i<n;i++) {
            nums[i]=temp[i-k];
        }
    }
};