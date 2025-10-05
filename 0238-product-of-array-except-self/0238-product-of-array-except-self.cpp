class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>answer(nums.size(),0);
        int leftProd=1,rightProd=1;
        for (int i=0;i<nums.size();i++) {
            answer[i]=leftProd;
            leftProd*=nums[i];
        }
        for (int i=nums.size()-1;i>=0;i--) {
            answer[i]*=rightProd;
            rightProd*=nums[i];
        }
        return answer;
    }
};