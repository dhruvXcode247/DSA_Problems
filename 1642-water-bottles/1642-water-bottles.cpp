class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total=0,empty=0;
        while(numBottles!=0) {
            total+=numBottles;
            empty+=numBottles;
            numBottles=empty/numExchange;
            empty%=numExchange;
        }
        return total;
    }
};