class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int n=prices.size();
        long long curr=1,count=1;
        for (int i=1;i<n;i++) {
            if (prices[i-1]-prices[i]==1) curr++;
            else curr=1;
            count+=curr;
        }
        return count;
    }
};