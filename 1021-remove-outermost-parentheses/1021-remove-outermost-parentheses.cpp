class Solution {
public:
    string removeOuterParentheses(string s) {
        int depth = 0;
        string result = "";
        for(char ch : s){
            if(ch == '('){
                if(depth>0){
                    result += '(';
                }
                depth++;
            }
            else if(ch == ')'){
                depth--;
                if(depth > 0){
                    result += ')';
                }
            }
            
        }
        return result;
    }
};