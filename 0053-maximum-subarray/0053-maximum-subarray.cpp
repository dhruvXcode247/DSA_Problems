class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // declaring sum and maxi variables to store the sum and the maximum sum
        int sum=0,maxi=INT_MIN;
        // iterating through the array
        for (int i=0;i<nums.size();i++) {
            sum+=nums[i];
            // checking if the sum is greater than the maximum sum 
            if (sum>maxi) {
                //if true then maxi holds the maximum sum
                maxi=sum;
            }
            // if the sum goes negative then we set the sum as 0
            if (sum<0) {
                sum=0;
            }
        }
        //returning the maximum subarray sum
        return maxi;
    }
};