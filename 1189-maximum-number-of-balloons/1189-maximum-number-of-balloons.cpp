class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> freq(128,0);
        for(int i=0; i<text.length(); i++){
            char ch = text[i];
            freq[ch]++;
        }
        return min(
            {
                freq['b'],
                freq['a'],
                freq['l']/2,
                freq['o']/2,
                freq['n'],
            }
        );
        
    }
};