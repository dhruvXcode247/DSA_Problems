class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>vec;
        for (int i=0;i<n;i++) {
            if (nums[i]==1) {
                vec.emplace_back(i);
            }
        }
        int n1=vec.size();
        for (int i=0;i<n1-1;i++) {
            if (vec[i+1]-vec[i]-1<k) return false;
        }
        return true;
    }
};