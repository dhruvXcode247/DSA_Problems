class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int diff=INT_MAX,n=arr.size();
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        for (int i=0;i<n-1;i++) {
            diff=abs(min(arr[i+1]-arr[i],diff));
        }
        for (int i=0;i<n-1;i++) {
            if (abs(arr[i]-arr[i+1])==diff) {
                ans.push_back({arr[i],arr[i+1]});
            }
        }
        return ans;
    }
};