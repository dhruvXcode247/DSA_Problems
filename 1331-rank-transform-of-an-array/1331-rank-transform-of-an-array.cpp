class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();

        if (n==0) return {};

        vector<int>temp;
        temp=arr;
        sort(temp.begin(),temp.end());

        int cnt=1;
        vector<int>ans(n,0);
        unordered_map<int,int>mpp;

        mpp[temp[0]]=1;

        for (int i=1;i<n;i++) {
            if (temp[i]!=temp[i-1]) {
                cnt++;
            }
            mpp[temp[i]]=cnt;
        }
        for (int i=0;i<n;i++) {
            ans[i]=mpp[arr[i]];
        }
        return ans;
    }
};