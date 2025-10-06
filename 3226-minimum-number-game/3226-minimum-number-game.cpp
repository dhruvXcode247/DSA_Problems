class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>count(101,0),ans;
        for (int i:nums) {
            count[i]++;
        }
        for (int i=1;i<101;i++) {
            while(count[i]>0) {
                ans.emplace_back(i);
                count[i]--;
            }
        }
        for (int i=0;i<ans.size();i+=2) {
            swap(ans[i],ans[i+1]);
        }
        return ans;
    }
};