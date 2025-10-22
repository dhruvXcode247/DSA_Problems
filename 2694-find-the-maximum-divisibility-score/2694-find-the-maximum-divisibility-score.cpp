class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int maxi=INT_MIN,count,idx=0;
        for (int i=0;i<divisors.size();i++) {
            count=0;
            for (int j=0;j<nums.size();j++) {
                if (nums[j]%divisors[i]==0) {
                    count++;
                }
            }
            if (maxi<count) {
                maxi=count;
                idx=i;
            }
            else if (maxi==count && divisors[i]<divisors[idx]) idx=i;
        }
        return divisors[idx];
    }
};