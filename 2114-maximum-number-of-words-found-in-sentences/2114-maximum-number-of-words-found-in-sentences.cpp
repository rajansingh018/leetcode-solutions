class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int maxCnt = INT_MIN;
        for(int i=0; i<n; i++){
            stringstream ss(sentences[i]);
            int cnt = 0;
            string word;
            while(ss >> word){
                cnt++;
            }
            maxCnt = max(maxCnt, cnt);
        }
        return maxCnt;
    }
};