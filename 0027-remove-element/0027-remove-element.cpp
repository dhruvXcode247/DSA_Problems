class Solution {
public:
    int removeElement(vector<int>& nums, int val) { 
        int j=0,count=nums.size();
        while(j<count) {
         if (nums[j]==val){
            nums.erase(nums.begin()+j);
            count--;
         }
         else {
            j++;
         }
        }
    return count;
    }
};