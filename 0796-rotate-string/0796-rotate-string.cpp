class Solution {
public:
    bool rotateString(string s, string goal) {
        int sl = s.length(), gl = goal.length();
        if(sl != gl) return false;

        string doubledstr = s + s;

        return doubledstr.find(goal) != string::npos;

    }
};