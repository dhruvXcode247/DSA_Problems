class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
        int number=n,element;
        for (int i=1;i<=number/2;i++) {
            ans.emplace_back(i);
            ans.emplace_back(-i);
        }
        if (number%2==1) ans.emplace_back(0);
        return ans;
    }
};