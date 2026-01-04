class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n=nums.size(),sum=0;
        unordered_set<int>st;
        for (int i=0;i<n;i++) {
            int num=nums[i],count=2;
            for (int j=2;j*j<=num;j++) {
                if (num%j==0) {
                    st.insert(j);
                    count++;
                    int other=num/j;
                    if (other!=j) {
                        st.insert(other);
                        count++;
                    }
                }
            }
            if (count==4) {
                st.insert(num);
                st.insert(1);
                for (auto it:st) {
                    sum+=it;
                }
            }
            st.clear();
        }
        return sum;
    }
};