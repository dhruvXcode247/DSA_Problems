class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end()),moves=0;
        for (int i=0;i<nums.size();i++) {
            while (nums[i]!=maxi) {
                nums[i]++;
                moves++;
            }
        }
        return moves;
    }
};