class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> answer,temp;
        int dig,ele;
        for (int i=0;i<nums.size();i++) {
            ele=nums[i];
            temp={};
            while(ele>0) {
                dig=ele%10;
                temp.emplace_back(dig);
                ele/=10;
            }
            reverse(temp.begin(),temp.end());
            for (int d:temp) answer.emplace_back(d);
        }
        return answer;
    }
};