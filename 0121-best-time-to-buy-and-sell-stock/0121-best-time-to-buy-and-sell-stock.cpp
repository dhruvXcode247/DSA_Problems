class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0],maxi=0,profit=0;
        for (int i=1;i<prices.size();i++) {
            profit=max(prices[i]-mini,profit);
            if (prices[i]<mini) {
                mini=prices[i];
            }
        }
        if (profit<=0) return 0;
        return profit;
    }
};