class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int n=arr.size();
        vector<pair<int,int>>vec;
        for (int i=0;i<n;i++) {
            int cnt=0;
            for (int j=0;j<32;j++) {
                if ((arr[i])&(1<<j)) {
                    cnt++;
                }
            }
            vec.push_back({cnt,arr[i]});
        }
        sort(vec.begin(),vec.end());
        for (int i=0;i<n;i++) {
            arr[i]=vec[i].second;
        }
        return arr;
    }
};