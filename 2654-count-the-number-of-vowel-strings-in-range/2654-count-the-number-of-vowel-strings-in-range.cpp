class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for (int i=left;i<=right;i++) {
            string check=words[i];
            int n=check.size()-1;
            if ((check[0]=='a' || check[0]=='e' || check[0]=='i' || check[0]=='o' || check[0]=='u') && 
            (check[n]=='a' || check[n]=='e' || check[n]=='i' || check[n]=='o' || check[n]=='u')) count++;
        }
        return count;
    }
};