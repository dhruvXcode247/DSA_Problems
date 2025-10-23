class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int n=nums.size(),m=nums[0].size(),maxi=0;
        for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {
                if (i==j || j==n-1-i) {
                    int num=nums[i][j];
                    bool ans=true;
                    if (num<2) continue;
                    for (int k=2;k*k<=num;k++) {
                        if (num%k==0) {
                            ans=false;
                            break;
                        }
                    }
                    if (ans) maxi=max(maxi,num);
                }
            }
        }
        return maxi;
    }
};