class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0,n=columnTitle.size();
        if (columnTitle.size()==1) return columnTitle[0]-'A'+1;
        for (int i=0;i<n;i++) {
            ans=(26*ans+(columnTitle[i]-'A')+1);
        }
        return ans;
    }
};