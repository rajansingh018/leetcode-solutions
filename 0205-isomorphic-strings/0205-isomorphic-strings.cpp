class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int m = s.length();
        int n = t.length();
        vector<int> smap(256, 0);
        vector<int> tmap(256, 0);
        if(m != n) return false;

        for(int i = 0; i < m; i++){
            if(smap[s[i]] != tmap[t[i]]) return false;

            smap[s[i]] = i+1;
            tmap[t[i]] = i+1;
        }
        return true;
    }
};