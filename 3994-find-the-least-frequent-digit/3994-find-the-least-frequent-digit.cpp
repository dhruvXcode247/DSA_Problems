class Solution {
public:
    int getLeastFrequentDigit(int n) {
        map<int,int>mpp;
        int dig,mini=INT_MAX,ans=INT_MAX;
        while(n>0){
            dig=n%10;
            mpp[dig]++;
            n=n/10;
        }
        for (auto it:mpp) {
            mini=min(mini,it.second);
        }
        for (auto it:mpp) {
            if (it.second==mini) {
                ans=min(ans,it.first);
            }
        }
        return ans;
    }
};