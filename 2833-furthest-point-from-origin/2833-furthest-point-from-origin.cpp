class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int count3=0,count1=0,count2=0;
        for (int i=0;i<moves.size();i++) {
            if (moves[i]=='L') count1++;
            else if (moves[i]=='R') count2++;
            else count3++;
        }
        return abs(count1-count2)+count3;
    }
};