class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxi;
        for (int i=0;i<arr.size();i++) {
            maxi=-1;
            for (int j=i+1;j<arr.size();j++) {
                maxi=max(maxi,arr[j]);
            }
            arr[i]=maxi;
        }
        return arr;
    }
};