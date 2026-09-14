class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        if(dividend == divisor) return 1;

        // initialise sign of quotient we will get;
        bool sign = true; // for all other cases
        if(dividend > 0 && divisor < 0) sign = false;
        if(dividend < 0 && divisor > 0) sign = false;
        // now firstly deal with only positive , make pos n and d if they are not

        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);
        long long quot = 0;

        while(n>=d){
            int cnt = 0;
            while(n >= (d<<(cnt+1))){
                cnt++;
            }
            quot += (1<<cnt);
            n = n - (d<<cnt);
        }
        if(quot == (1<<31) && sign) return INT_MAX;
        if(quot == (1<<31) && !sign) return INT_MIN;

        return sign ? quot : (-quot);
    }
};