class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for (int i=0;i<nums.size();i++) {
            pq.push(nums[i]);
        }
        int remove=k-1;
        while(remove>0) {
            pq.pop();
            remove--;
        }
        return pq.top();
    }
};