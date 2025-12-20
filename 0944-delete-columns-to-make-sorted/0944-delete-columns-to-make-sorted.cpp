class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n=strs.size(),m=strs[0].size(),i=0,k=0,count=0;
        while (i<m) {
            for (int j=0;j<n-1;j++) {
                if (strs[j][i]>strs[j+1][i]) {
                    count++;
                    break;
                }
            }
            i++;
        }
        return count;
    }
};