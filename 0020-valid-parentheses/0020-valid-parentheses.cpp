class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        if(n==1) return false;
        if(n%2 == 1) return false;
        stack<char> st;
        for(char ch : s){
            if(ch == '(' || ch == '{' || ch=='[') {
                st.push(ch);
                continue;
            }
            if(ch == ')' || ch == '}' || ch==']'){
                if(st.empty()) return false;

                if((ch == ')' && st.top() =='(') ||
                   (ch == '}' && st.top()=='{') ||
                   (ch == ']' && st.top()=='[')) {
                    st.pop();
                    continue;
                }
                else return false;
            }
        }
        return st.empty();
    }
};