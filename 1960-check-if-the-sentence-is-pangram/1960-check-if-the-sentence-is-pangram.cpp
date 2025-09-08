class Solution {
public:
    bool checkIfPangram(string sentence) {
        for (int i=0;i<sentence.size();i++) {
            sentence[i]=sentence[i]-'a';
        }
        for (int i=0;i<26;i++){
            if (sentence.find(i)==string::npos) return false;
        }
        return true;
    }
};