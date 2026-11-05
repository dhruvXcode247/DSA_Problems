class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n=arr1.size(),m=arr2.size(),cnt=0;
        bool flag=false;
        for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {
                int ele=abs(arr1[i]-arr2[j]);
                if (ele>d) flag=true;
                else {
                    flag=false;
                    break;
                }
            }
            if (flag) cnt++;
        }
        return cnt;
    }
};