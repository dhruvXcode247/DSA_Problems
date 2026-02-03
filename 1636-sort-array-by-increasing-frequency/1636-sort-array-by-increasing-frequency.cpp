class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>ans(201,0);
        int n=nums.size();
        for (int i=0;i<n;i++) {
            ans[nums[i]+100]++;
        }
        sort(nums.begin(),nums.end(),[&](int a, int b) {
            if (ans[a+100]!=ans[b+100]) {
                return ans[a+100]<ans[b+100];
            }
            return a>b;
        });
        return nums;
    }
};