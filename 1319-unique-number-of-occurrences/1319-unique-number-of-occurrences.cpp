class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mpp;
        for (int i=0;i<arr.size();i++) {
            mpp[arr[i]]++;
        }
        unordered_set<int>st={};
        for (auto p:mpp) {
            if(st.count(p.second)) return false;
            st.insert(p.second);
        }
        return true;
    }
};