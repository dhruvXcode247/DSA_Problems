class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>freq;
        string sorted="";
        for (int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        vector<pair<char,int>>vec(freq.begin(),freq.end());
        int i=0;
        sort(vec.begin(),vec.end(),[i](auto a,auto b) {
            return a.second>b.second;
        });
        for (int i=0;i<vec.size();i++) {
            sorted.append(vec[i].second,vec[i].first);
        }
        return sorted;
    }
};