class Solution {
public:
    int maxDepth(string s) {
        int n=s.length();
        int ans = 0;
        int open =0;
        for(char ch : s){
            if(ch == '('){
                open++;
                ans = max(ans, open);
            }
            else if(ch == ')') open--;
        }
        return ans;
    }
};