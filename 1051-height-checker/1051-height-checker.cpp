class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>check=heights;
        int cnt=0;
        sort(check.begin(),check.end());
        for (int i=0;i<check.size();i++) {
            if (check[i]!=heights[i]) cnt++;
        } 
        return cnt;
    }
};