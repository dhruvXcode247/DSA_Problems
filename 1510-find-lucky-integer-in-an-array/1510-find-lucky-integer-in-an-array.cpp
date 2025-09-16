class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size(),maxi=-1;
        unordered_map<int,int>mpp;
        for (int i=0;i<n;i++) {
            mpp[arr[i]]++;
        }
        for (auto it:mpp) {
            if (it.first==it.second) maxi=max(it.first,maxi);
        }
        return maxi;
    }
};