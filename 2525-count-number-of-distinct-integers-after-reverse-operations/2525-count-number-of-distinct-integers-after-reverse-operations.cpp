class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int count=0,n=nums.size();
        for (int i=0;i<n;i++) {
            if (nums[i]>=0 && nums[i]<=9) continue;
            int num=nums[i],revnum=0;
            while (num>0) {
                revnum=(revnum*10)+num%10;
                num/=10;
            }
            if (revnum!=nums[i]) st.insert(revnum);
        }
        return st.size();
    }
};