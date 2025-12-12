class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>ans(boxes.size(),0);
        for (int i=0;i<boxes.size();i++) {
            for (int j=boxes.size()-1;j>=0;j--) {
                if (boxes[j]=='1') ans[i]+=abs(j-i);
            }
        }
        return ans;
    }
};