class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        int mod=1e9+7;
        vector<int>nums(n,1);
        int j=0;
        while(j<k){
            for (int i=1;i<n;i++){
                nums[i]=(nums[i]+nums[i-1])%mod;
            }
            j++;
        }
        return nums[n-1];
    }
};