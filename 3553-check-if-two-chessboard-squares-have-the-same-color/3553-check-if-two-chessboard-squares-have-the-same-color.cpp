class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        if (((coordinate2[0]-'a')+(coordinate2[1]-'0'))%2==
        ((coordinate1[0]-'a')+(coordinate1[1]-'0'))%2) return true;
    return false;
    }
};