class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

        string ans = "";
        int n = strs.size();
        int len1 = strs[0].length();
        for(int i =0; i<len1; i++){
            char chtocomp = strs[0][i];
            for(int j = 1; j< n; j++){
                if(i >= strs[j].length() || strs[j][i] != chtocomp){
                    return ans;
                }
            }
            ans.push_back(chtocomp);
        }
        return ans;
    }
};