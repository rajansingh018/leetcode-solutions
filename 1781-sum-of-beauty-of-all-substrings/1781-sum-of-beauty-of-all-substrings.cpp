class Solution {
public:
    int beautySum(string s) {
        int n = s.length();
        int totalbeauty = 0;
        for(int i=0; i<n; i++){
            vector<int> freq(26,0);
            for(int j=i; j<n; j++){
                freq[s[j] - 'a']++;
            int h = INT_MIN, l = INT_MAX;

            for(int k=0; k<26; k++){
                if(freq[k] > 0){
                    h = max(h, freq[k]);
                    l = min(l, freq[k]);
                }
            }
            totalbeauty  += (h-l);
            }
            
        }
        
        return totalbeauty;

    }
};