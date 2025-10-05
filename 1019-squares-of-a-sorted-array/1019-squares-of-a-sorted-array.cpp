class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>pq;
        vector<int>answer;
        for (int i=0;i<nums.size();i++) {
            pq.push(nums[i]*nums[i]);
        }
        while(!pq.empty()) {
            answer.push_back(pq.top());
            pq.pop();
        }
        return answer;
    }
};