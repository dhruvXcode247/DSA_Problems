class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n=colors.size(),dist=INT_MIN;
        for (int i=0;i<n;i++) {
            for (int j=0;j<n;j++) {
                if (j!=i && colors[i]!=colors[j]) {
                    dist=max(dist,abs(i-j));
                }
            }
        }
        return dist;
    }
};