class Solution {
public:
    string sortVowels(string s) {
        vector<char>ans;
        for (int i=0;i<s.size();i++) {
            if (tolower(s[i])=='a' || tolower(s[i])=='e' ||tolower(s[i])=='i' ||
            tolower(s[i])=='o' ||tolower(s[i])=='u') {
                ans.emplace_back(s[i]);
            }
        }
        sort(ans.begin(),ans.end());
        int j=0;
        for (int i=0;i<s.size();i++) {
            if (tolower(s[i])=='a' || tolower(s[i])=='e' ||tolower(s[i])=='i' ||
            tolower(s[i])=='o' ||tolower(s[i])=='u') {
                s[i]=ans[j];
                j++;
            }
        }
        return s;
    }
};