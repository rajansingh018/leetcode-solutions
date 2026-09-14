class Solution {
public:
    int minBitFlips(int start, int goal) {
        int n = start^goal;
        if(n==0) return 0;

        // cnt of set bits in xor of start and goal i.e. in n will give minimin no. of bit flips to convert start to goal
        int cnt = 0;
        while(n>1){
            if((n&1) == 1) cnt += 1; // means n%2 == n&1
            n = (n>>1); // n= n/2
        }
        if(n==1) cnt += 1;
        return cnt;
    }
};