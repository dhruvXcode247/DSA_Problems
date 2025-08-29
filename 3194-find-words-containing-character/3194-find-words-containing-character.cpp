class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>indices={};
        int j=0;
        string str="";
        for (int i=0;i<words.size();i++) {
            str=words[i];
            for (int j=0;j<str.size();j++) {
                if (str[j]==x) {
                    indices.emplace_back(i);
                    break;
                }
            }
        }
        return indices;
    }
};