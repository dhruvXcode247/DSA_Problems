class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int beg=0,mid,end=arr.size()-1;
        while (beg<=end) {
            int mid=(beg+end)/2;
            int missing=arr[mid]-(mid+1);
            if (missing<k) {
                beg=mid+1;
            }
            else {
                end=mid-1;
            }
        }
        return end+k+1;
    }
};