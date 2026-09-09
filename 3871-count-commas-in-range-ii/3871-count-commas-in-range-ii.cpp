class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000) return 0;
        long long cntcom = 0;
        long long x = 1000;
        while(x <= n){
            cntcom += n-x+1;
            x = x*1000;
        }
        
        return cntcom;
    }
};