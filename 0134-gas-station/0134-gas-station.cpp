class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totgas=0,totcost=0,n=gas.size();
        for (auto it:gas) {
            totgas+=it;
        }
        for (auto it:cost) {
            totcost+=it;
        }
        int curgas=0,st=0;
        if (totgas<totcost) return -1;
        for (int i=0;i<n;i++) {
            curgas+=gas[i]-cost[i];
            if (curgas<0) {
                curgas=0;
                st=i+1;
            }
        }
        return st;
    }
};