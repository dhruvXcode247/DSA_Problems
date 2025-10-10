class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1=0,sum2=0,cnt1=0,cnt2=0;
        for (int i:nums1) {
            sum1+=i;
            if (i==0) {
                sum1++;
                cnt1++;
            }
        }
        for (int i:nums2) {
            sum2+=i;
            if (i==0) {
                sum2++;
                cnt2++;
            }
        }
        if ((cnt1==0 && sum2>sum1) || (cnt2==0 && sum1>sum2)) return -1;
        return max(sum1,sum2);
    }
};