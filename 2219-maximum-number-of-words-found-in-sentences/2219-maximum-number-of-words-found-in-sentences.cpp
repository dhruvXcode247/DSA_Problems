class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi=INT_MIN,n=sentences.size();
        for (int i=0;i<n;i++) {
            int m=sentences[i].size(),count=1;
            for (int j=0;j<m;j++) {
                if (sentences[i][j]==' ') count++;
            }
            maxi=max(count,maxi);
        }
        return maxi;
    }
};