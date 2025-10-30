class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int i=0,n=gifts.size(),m=gifts.size();
        priority_queue<int>pq(gifts.begin(),gifts.end());
        long long rem=0;
        while (k>0) {
            int top=pq.top();
            pq.pop();
            pq.push(sqrt(top));
            k--;
        }
        while(!pq.empty()) {
            rem+=pq.top();
            pq.pop();
        }
        return rem;
    }
};