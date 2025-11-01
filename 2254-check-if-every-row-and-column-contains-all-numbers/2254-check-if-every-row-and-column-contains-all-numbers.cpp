class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        unordered_set<int>st;
        int n=matrix.size();
        for (int i=0;i<n;i++) {
            st.clear();
            for (int k=1;k<=n;k++) {
                st.insert(k);
            }
            for (int j=0;j<n;j++) {
                if (st.find(matrix[i][j])!=st.end()) {
                    st.erase(matrix[i][j]);
                }
            }
            if (st.size()>=1) return false;
        }
        for (int i=0;i<n;i++) {
            st.clear();
            for (int k=1;k<=n;k++) {
                st.insert(k);
            }
            for (int j=0;j<n;j++) {
                if (st.find(matrix[j][i])!=st.end()) {
                    st.erase(matrix[j][i]);
                }
            }
            if (st.size()>=1) return false;
        }
        return true;
    }
};