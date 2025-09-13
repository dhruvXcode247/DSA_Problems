class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>mpp;
        int vowcount=0,conscount=0;
        for (int i=0;i<s.size();i++) {
            mpp[s[i]]++;
        }
        for (auto it:mpp){
            if (it.first=='a'||it.first=='e'||it.first=='i'||it.first=='o'|| it.first=='u'){
                vowcount=max(vowcount,it.second);
            }
            else {
                conscount=max(conscount,it.second);
            }
        }
        return vowcount+conscount;
    }
};