class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        long long sum1=0,sum2=0;
        for (int i:nums1) {
            sum1+=i;
        }
        for (int i:nums2) {
            sum2+=i;
        }
        return (int)((sum2-sum1)/(long long)(nums2.size()));
    }
};