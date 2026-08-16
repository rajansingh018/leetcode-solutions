class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int n = stones.size();
        if(n == 1) return false;

        vector<int>count(3,0);
        for(int stone : stones){
            count[stone%3]++;
        }
        int cnt0 = count[0];
        int cnt1 = count[1];
        int cnt2 = count[2];

        if(cnt0 % 2 == 0){
            return min(cnt1, cnt2) > 0;
        }
        else{
            return abs(cnt1 - cnt2) > 2;
        }

    }
};