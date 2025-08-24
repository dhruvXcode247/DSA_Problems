class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=goal.size();
        if (n==s.size()) {
            while (n>0) {
                s.push_back(s[0]);
                s.erase(s.begin()+0);
                if (s==goal) return true;
                n--;
            }
        }
        return false;
    }
};