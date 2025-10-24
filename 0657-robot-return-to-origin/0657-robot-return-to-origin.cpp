class Solution {
public:
    bool judgeCircle(string moves) {
        int count[26]={0},len=0;
        for (int i=0;i<moves.size();i++) {
            count[moves[i]-'A']++;
        }
        return ((count['U'-'A']==count['D'-'A']) && (count['R'-'A']==count['L'-'A']));
    }
};