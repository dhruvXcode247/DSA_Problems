class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        long long sum=0,n=nums.size();
        sort(nums.begin(),nums.end(),greater<int>());
        k=min(k,int(n));
        for (int i=0;i<k;i++) {
            if (mul>=1) {
                sum+=1LL*nums[i]*mul;
            }
            else {
                sum+=nums[i];
            }
            mul--;
        }
        return sum;
    }
};