class Solution {
public:
    string toLowerCase(string s) {
        // for(char& c : s){
        //     c = tolower(c);
        // }
        for(char& c : s){
            if(c >= 'A' && c <= 'Z'){
                c = c+32;
            }
        }
        return s;
    }
};