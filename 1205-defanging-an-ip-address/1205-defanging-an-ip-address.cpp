class Solution {
public:
    string defangIPaddr(string address) {
        string temp="";
        for (int i=0;i<address.size();i++) {
            if (address[i]=='.') temp+="[.]";
            else temp+=address[i];
        }
        return temp;
    }
};