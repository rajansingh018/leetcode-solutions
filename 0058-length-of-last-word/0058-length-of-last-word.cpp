class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string lw = "";

        while(ss >> lw){}
        return  lw.length();
    }
};