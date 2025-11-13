class Solution {
public:
    int summ(int index,int n,vector<int>&nums,int sum) {
        if (index==n) return sum;
        int include=summ(index+1,n,nums,sum^nums[index]);
        int exclude=summ(index+1,n,nums,sum);
        return include+exclude;
    }

    int subsetXORSum(vector<int>& nums) {
        int n=nums.size(),sum=0,exor=0;
        return summ(0,n,nums,0);
    }
};