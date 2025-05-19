class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for (int i=1;i<=numRows;i++) {
            vector<int>ansMat;
            long long answer=1;
            ansMat.emplace_back(1);
            for (int col=1;col<i;col++){
                answer=answer*(i-col);
                answer/=col;
                ansMat.emplace_back(answer);
            }
            ans.emplace_back(ansMat);
        }
        return ans;
    }
};