class Solution {
public:
    int vowelConsonantScore(string s) {
        int v=0,c=0,score=0;
        for (auto it:s) {
            if (isalpha(it)) {
                if (it=='a' || it=='e' || it=='i' || it=='o' || it=='u') {
                    v++;
                }
                else c++;
            }
        }
        if (c>0) score=v/c;
        return score;
    }
};