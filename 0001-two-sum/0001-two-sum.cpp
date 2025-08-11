class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    map<int,int>mpp;
    int num,req;
    for (int i=0;i<nums.size();i++) {
        num=nums[i];
        req=target-num;
        if (mpp.find(req)!=mpp.end()) {
            return {i,mpp[req]};
        }
        mpp[num]=i;
    }
        return {-1,-1};
    }
};