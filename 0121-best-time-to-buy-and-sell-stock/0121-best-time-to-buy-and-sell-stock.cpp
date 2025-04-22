class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX,maxi=0,profit=0;
        for (int i=0;i<prices.size();i++) {
            if (prices[i]<mini) {
                mini=prices[i];
            }
            profit=max(prices[i]-mini,profit);
        }
        if (profit<=0) return 0;
        return profit;
    }
};