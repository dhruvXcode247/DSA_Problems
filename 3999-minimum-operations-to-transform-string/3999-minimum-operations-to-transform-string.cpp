class Solution {
public:
    int minOperations(string s) {
        int count=0;
        for (int i=0;i<s.size();i++) {
            int dist=(26-(s[i]-'a'))%26;
            count=max(count,dist);
        }
        return count;
    }
};