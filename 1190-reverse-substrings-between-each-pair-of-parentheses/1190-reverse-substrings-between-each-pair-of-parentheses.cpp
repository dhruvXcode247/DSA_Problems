class Solution {
public:
    string reverseParentheses(string s) {
        int n=s.size();
        vector<int>pair(n);

        stack<int>st;
        for (int i=0;i<n;i++) {
            if (s[i]=='(') st.push(i);
            else if (s[i]==')') {
                int top=st.top();
                st.pop();
                pair[top]=i;
                pair[i]=top;
            }
        }

        string res;
        int i=0,dir=1;

        while (i>=0 && i<n) {
            if (s[i]=='(' || s[i]==')') {
                i=pair[i];
                dir=-dir;
            }
            else {
                res+=s[i];
            }
            i+=dir;
        }
        return res;
    }
};