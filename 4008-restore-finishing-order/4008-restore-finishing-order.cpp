class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int>st;
        vector<int>temp;
        for (int i=0;i<friends.size();i++) {
            st.insert(friends[i]);
        }
        for (int i=0;i<order.size();i++) {
            if (st.find(order[i])!=st.end()) temp.emplace_back(order[i]);
        }
        return temp;
    }
};