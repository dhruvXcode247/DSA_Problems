class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n=bits.size(),cnt=0,i=0;
        while(i<n-1) {
            if (bits[i]==1) i+=2;
            else i++;
        }
        return i==n-1?true:false;
    }
};