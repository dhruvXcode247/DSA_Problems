class Solution {
public:
    bool doesAliceWin(string s) {
        for (auto it:s) {
            if (it=='a' || it=='e' || it=='i' || it=='o' || it=='u') return true;
        }
        return false;
    }
};