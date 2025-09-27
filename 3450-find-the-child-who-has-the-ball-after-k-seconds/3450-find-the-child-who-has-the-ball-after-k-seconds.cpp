class Solution {
public:
    int numberOfChild(int n, int k) {
        int j=0,pos=0,i=1;
        while (j!=k){
            pos+=i;
            j++;
            if (pos==0 || pos==n-1) i=-i;
        }
        return pos;
    }
};