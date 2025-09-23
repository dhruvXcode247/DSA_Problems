class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size(),n=nums2.size(),i=0,j=0;
        vector<int>temp;
        while(i<m && j<n) {
            if (nums1[i]<nums2[j]) {
                temp.push_back(nums1[i]);
                i++;
            }
            else {
                temp.push_back(nums2[j]);
                j++;
            }
        }
        while (i<m) {
            temp.push_back(nums1[i]);
            i++;
        }
        while(j<n) {
            temp.push_back(nums2[j]);
            j++;
        }
        if ((m+n)%2!=0) {
            return double(temp[(m+n)/2]);
        }
        return double((temp[(m+n)/2]+temp[((m+n)/2)-1])/2.0);
    }
};