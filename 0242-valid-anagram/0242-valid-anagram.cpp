class Solution {
public:
    bool isAnagram(string s, string t) {
        int sl = s.length(), tl = t.length();
        if(sl != tl) return false;
        vector<int> freq(26, 0);
        for(int i =0; i<sl; i++){
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        for(int f : freq){
            if(f != 0) return false;
        }

        return true;

    }
};