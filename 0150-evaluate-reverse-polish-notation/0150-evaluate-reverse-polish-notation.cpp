class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int n=tokens.size();
        for (int i=0;i<n;i++) {
            if (tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/") {
                int f=st.top();
                st.pop();
                int s=st.top();
                st.pop();

                if (tokens[i]=="+") st.push(s+f);
                if (tokens[i]=="-") st.push(s-f);
                if (tokens[i]=="*") st.push(s*f);
                if (tokens[i]=="/") st.push(s/f);
            }
            else st.push(stoi(tokens[i]));
        }
        return st.top();
    }
};