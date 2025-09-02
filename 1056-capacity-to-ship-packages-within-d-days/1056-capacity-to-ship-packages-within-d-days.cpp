class Solution {
public:
    int findDays(vector<int> weights,int capacity) {
        int days=1,load=0;
        for (int i=0;i<weights.size();i++) {
            if (weights[i]+load>capacity) {
                days++;
                load=weights[i];
            }
            else {
                load+=weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int beg=*max_element(weights.begin(),weights.end());
        int end=accumulate(weights.begin(),weights.end(),0);
        while(beg<=end) {
            int mid=(beg+end)/2;
            int noOfDays=findDays(weights,mid);
            if (noOfDays<=days) {
                end=mid-1;
            }
            else {
                beg=mid+1;
            }
        }
        return beg;
    }
};