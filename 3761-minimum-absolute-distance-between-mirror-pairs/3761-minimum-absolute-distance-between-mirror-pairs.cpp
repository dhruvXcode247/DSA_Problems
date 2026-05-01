class Solution {
public:
    int rev(int number) {
        int dig=0;
        while (number>0) {
            dig=dig*10+(number%10);
            number/=10;
        }
        return dig;
    }

    int minMirrorPairDistance(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        int mini=INT_MAX;
        for (int i=0;i<n;i++) {
            int num=rev(nums[i]);
            if (mpp.find(nums[i])!=mpp.end()) {
                mini=min(mini,i-mpp[nums[i]]);
            }
            mpp[num]=i;
        }
        if (mini==INT_MAX) {
            return -1;
        }
        return mini;
    }
};