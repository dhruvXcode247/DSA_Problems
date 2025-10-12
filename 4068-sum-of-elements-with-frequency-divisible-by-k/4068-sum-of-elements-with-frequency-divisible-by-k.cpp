class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int sum=0;
        unordered_map<int,int>mpp;
        for (int i=0;i<nums.size();i++) {
            mpp[nums[i]]++;
        }
        for (auto it: mpp) {
            if (it.second%k==0) {
                for (int j=0;j<it.second;j++) {
                    sum+=it.first;
                }
            }
        }
        return sum;
    }
};