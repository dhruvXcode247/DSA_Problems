class Solution {
public:
    void combinations(int num, vector<vector<int>>&ans, vector<int>temp, int k, int n) {
        if (n==0) {
            if (k==0) {
                ans.emplace_back(temp);
                return;
            }
        }

        if (num>9 || k<0 || n<0) return;

        combinations(num+1,ans,temp,k,n);
        temp.emplace_back(num);
        if (n-num>=0) combinations(num+1,ans,temp,k-1,n-num);
        temp.pop_back();
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>temp;
        combinations(1,ans,temp,k,n);
        return ans;
    }
};