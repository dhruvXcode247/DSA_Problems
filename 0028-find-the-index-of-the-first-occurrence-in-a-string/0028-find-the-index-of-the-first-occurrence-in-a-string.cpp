class Solution {
public:
    int strStr(string haystack, string needle) {
        string substr="";
        int len=needle.size();
        if (haystack.size()<needle.size()) return -1;
        for (int i=0;i<=haystack.size()-len;i++) {
            substr=haystack.substr(i,len);
            if (substr==needle) return i;
        }
        return -1;
    }
};