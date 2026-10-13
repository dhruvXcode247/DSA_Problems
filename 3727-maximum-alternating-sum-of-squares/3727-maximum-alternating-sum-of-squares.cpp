class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        long long ans=0;

        vector<long long>arr(n,0);
        for (int i=0;i<n;i++) {
            arr[i]=1LL*nums[i]*nums[i];
        }

        sort(arr.begin(),arr.end());
        int k=n/2;

        for (int i=0;i<k;i++) {
            ans-=arr[i];
        }

        for (int i=k;i<n;i++) {
            ans+=arr[i];
        }

        return ans;
    }
};