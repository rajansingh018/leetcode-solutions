class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string result = "";
        string temp;
        vector<string> words;
        while(ss >> temp){
            words.push_back(temp);
        }
        for(int i = words.size()-1; i>=0; i--){
            result += words[i];
            if(i>0) result += " ";
        }
        return result;
    }
};