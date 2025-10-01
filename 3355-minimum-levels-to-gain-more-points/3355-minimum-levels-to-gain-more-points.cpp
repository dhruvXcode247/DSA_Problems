class Solution {
public:
    int minimumLevels(vector<int>& possible) {
        int sum=0;
        for (int i=1;i<possible.size();i++) {
            sum+=(possible[i]==0)?-1:1;
        }
        int cnt=(possible[0]==1)?1:-1;
        for (int i=1;i<possible.size();i++) {
            if (cnt>sum) return i;
            if (possible[i]==1) {
                cnt++;
                sum--;
            }
            else {
                cnt--;
                sum++;
            }
        }
        return -1;
    }
};