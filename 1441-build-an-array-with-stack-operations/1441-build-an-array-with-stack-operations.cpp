class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int val=1,k=target.size(),i=0;
        vector<string>ans;
        while(i<k) {
            if (target[i]==val) {
                ans.emplace_back("Push");
                i++;
            }
            else {
                ans.emplace_back("Push");
                ans.emplace_back("Pop");
            }
            val++;
        }
        return ans;
    }
};