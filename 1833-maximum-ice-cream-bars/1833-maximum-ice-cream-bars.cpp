class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n=costs.size(),sum=0,cnt=0,i=0;
        sort(costs.begin(),costs.end());
        while (i<n && sum+costs[i]<=coins) {
            sum+=costs[i];
            i++;
            cnt++;
        }
        return cnt;
    }
};