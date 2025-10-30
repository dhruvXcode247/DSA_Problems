class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        sort(gifts.begin(),gifts.end(),greater<int>());
        int i=0,n=gifts.size();
        long long rem=0;
        while (k>0) {
            int maxi=0,idx=0;
            for (int i=0;i<n;i++) {
                if (maxi<gifts[i]) {
                    maxi=gifts[i];
                    idx=i;
                }
            }
            gifts[idx]=sqrt(gifts[idx]);
            k--;
        }
        for (int i=0;i<n;i++) {
            rem+=gifts[i];
        }
        return rem;
    }
};