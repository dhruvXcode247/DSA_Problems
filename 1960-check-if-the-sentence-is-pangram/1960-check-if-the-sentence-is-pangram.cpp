class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char>character={sentence.begin(),sentence.end()};
        return character.size()==26;
    }
};