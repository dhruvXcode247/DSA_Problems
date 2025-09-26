class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int maxi,idx1,idx2,n=nums.size(),mini;
        double mini1=DBL_MAX;
        vector<double>averages;
        for (int i=0;i<n/2;i++) {
            maxi=INT_MIN,mini=INT_MAX;
            for (int j=0;j<nums.size();j++) {
                if (nums[j]>maxi) {
                    maxi=nums[j];
                    idx1=j;
                }
                if (nums[j]<mini) {
                    mini=nums[j];
                    idx2=j;
                }
            }
            averages.emplace_back((mini+maxi)/2.0);
            nums.erase(nums.begin()+max(idx2,idx1));
            nums.erase(nums.begin()+min(idx2,idx1));
        }
        for (int i=0;i<averages.size();i++) {
            mini1=min(mini1,averages[i]);
        }
        return mini1;
    }
};