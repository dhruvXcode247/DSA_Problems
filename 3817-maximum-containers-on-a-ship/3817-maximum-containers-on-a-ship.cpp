class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int cells=n*n,weight,answer=0,sum=0;
        for (int i=1;i<=cells;i++) {
            weight=i*w;
            if (weight<=maxWeight) answer=i;
            else break;
        }
        return answer;
    }
};