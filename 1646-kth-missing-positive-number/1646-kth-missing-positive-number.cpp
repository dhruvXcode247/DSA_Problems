class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int beg=0,end=arr.size()-1,count=0;
        for (int i=0;i<arr.size();i++) {
            if (arr[i]<=k) k++;
            else break;
        }
        return k;
    }
};