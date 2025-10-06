class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int answer1=0,answer2=0,n1=nums1.size(),n2=nums2.size();
        vector<int>freq1(1001,0),freq2(1001,0);
        for (int i:nums1) {
            freq1[i]++;
        }
        for (int i:nums2) {
            if (freq1[i]>0) answer1++;
        }
        for (int i:nums2) {
            freq2[i]++;
        }
        for (int i:nums1) {
            if (freq2[i]>0) answer2++;
        }
        return {answer2,answer1};
    }
};