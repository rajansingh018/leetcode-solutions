class Solution {
public:
    bool isAnagram(string s, string t) {
        int sl = s.length(), tl = t.length();
        if(sl != tl) return false;
        vector<int> sfreq(26, 0);
        vector<int> tfreq(26, 0);
        for(int i =0; i<sl; i++){
            sfreq[s[i] - 'a']++;
            tfreq[t[i] - 'a']++;
        }
        if(sfreq == tfreq) return true;

        return false;

    }
};