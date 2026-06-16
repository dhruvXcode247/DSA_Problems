class Solution {
public:
    string processStr(string s) {
        int n=s.length();
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                if(!ans.empty()){
                    ans.pop_back();
                }
            }
            else if(s[i]=='#'){
                ans+=ans;
            }
            else if (s[i]=='%'){
                reverse(ans.begin(),ans.end());
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};