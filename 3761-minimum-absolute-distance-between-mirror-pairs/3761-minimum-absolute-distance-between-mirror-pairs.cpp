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
        for (int i=0;i<n;i++) {
            mpp[nums[i]]=i;
        }
        int mini=INT_MAX;
        for (int i=0;i<n;i++) {
            int num=rev(nums[i]);
            if (mpp.find(num)!=mpp.end()) {
                if (mpp[num]>i) {
                    mini=min(mini,abs(mpp[num]-i));
                    mpp[num]=i;
                }
            }
        }
        if (mini==INT_MAX) {
            return -1;
        }
        return mini;
    }
};