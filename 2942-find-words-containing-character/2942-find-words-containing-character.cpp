class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int n = words.size();
        vector<int> ans;
        int i = 0;
        for(const string& str : words){
            for(char ch : str){
                if(ch == x) {
                    ans.push_back(i);
                    break;
                }
            }
            i++;
        }
        return ans;
    }
};