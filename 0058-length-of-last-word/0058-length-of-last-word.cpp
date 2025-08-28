class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int n=s.size()-1;
        while(s[n]==' ') {
            s.erase(s.begin()+n);
            n--;
        }
        for (int i=n;i>=0;i--) {
            if(s[i]==' ') {
                break;
            }
            count++;            
        }
        return count;
    }
};