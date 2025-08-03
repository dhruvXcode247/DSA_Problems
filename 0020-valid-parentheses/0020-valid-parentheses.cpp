class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char i:s) {
            if (i=='(' || i=='{' || i=='[') st.push(i);
            else {
                if (st.empty()) return false;
                char ch=st.top(); 
                st.pop();
                if ((i==')' && ch=='(') || (i=='}' && ch=='{') || (i==']' && ch=='[')) 
                    continue;
                else return false;
            }
        }
        return st.empty();
    }
};