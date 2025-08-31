class Solution {
public:
    int gcd(int mini,int maxi) {
        if (maxi==0) return mini;
        return gcd(maxi,mini%maxi);
    }

    int findGCD(vector<int>& nums) {
        int maxi=INT_MIN,mini=INT_MAX;
        for (int i=0;i<nums.size();i++) {
            maxi=max(maxi,nums[i]);
            mini=min(mini,nums[i]);
        }
        return gcd(maxi,mini);
    }
};