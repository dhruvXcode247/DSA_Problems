class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0,presum=0,remove;
        unordered_map<int,int>mpp;
        mpp[0]=1;
        for (int i=0;i<nums.size();i++) {
            presum+=nums[i];
            remove=presum-k;
            count+=mpp[remove];
            mpp[presum]++;
        }
        return count;
    }
};