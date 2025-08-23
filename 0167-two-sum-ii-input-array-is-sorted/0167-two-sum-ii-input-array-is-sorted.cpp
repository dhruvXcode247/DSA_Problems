class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int beg=0,end=numbers.size()-1,sum=0;
        for (int i=0;i<numbers.size();i++) {
            sum=numbers[beg]+numbers[end];
            if (sum==target) return {beg+1,end+1};
            else {
                if (target<sum) end--;
                else beg++;
            }
        }
        return {};
    }
};