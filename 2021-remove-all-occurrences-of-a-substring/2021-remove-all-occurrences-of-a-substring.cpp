class Solution {
public:
    string removeOccurrences(string s, string part) {
        int s1=s.size(),p1=part.size();
        while (s1>0 && s.find(part)<s.length()) {
                s.erase(s.find(part),p1);
        }
        return s;
    }
};