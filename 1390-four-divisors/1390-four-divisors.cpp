class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n=nums.size(),sum=0,total=0;
        for (int i=0;i<n;i++) {
            int num=nums[i],count=2,sum=1+num;
            for (int j=2;j*j<=num;j++) {
                if (num%j==0) {
                    sum+=j;
                    count++;
                    int other=num/j;
                    if (other!=j) {
                        sum+=other;
                        count++;
                    }
                }
            }
            if (count==4) {
                total+=sum;
            }
            sum=0;
        }
        return total;
    }
};