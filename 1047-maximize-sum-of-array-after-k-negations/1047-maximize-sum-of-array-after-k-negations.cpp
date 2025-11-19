class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq(nums.begin(),nums.end());
        int sum=0;
        while (k--) {
            int top=pq.top();
            pq.pop();
            pq.push(top*-1);
        }
        while (!pq.empty()) {
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};