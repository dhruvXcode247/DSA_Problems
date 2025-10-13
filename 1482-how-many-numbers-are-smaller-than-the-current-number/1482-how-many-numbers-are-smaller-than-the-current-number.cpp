class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int arr[101]={0},count=0;
        vector<int>ans;
        for (int i=0;i<nums.size();i++) {
            arr[nums[i]]++;
        }
        for (int i=1;i<101;i++) {
            arr[i]+=arr[i-1];
        }
        for (int i=0;i<nums.size();i++) {
            if (nums[i]==0){
                ans.emplace_back(0);
            }
            else {
                ans.emplace_back(arr[nums[i]-1]);
            }
        }
        return ans;
    }
};