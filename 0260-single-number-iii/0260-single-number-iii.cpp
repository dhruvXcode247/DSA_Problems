class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xorr=0;
        for (int i=0;i<nums.size();i++) {
            xorr^=nums[i];
        }
        long long rightmost=(xorr&xorr-1)^xorr;
        int bucket1=0,bucket2=0;
        for (int i=0;i<nums.size();i++) {
            if (rightmost&nums[i]) {
                bucket1^=nums[i];
            }
            else {
                bucket2^=nums[i];
            }
        }
        return {bucket1,bucket2};
    }
};  