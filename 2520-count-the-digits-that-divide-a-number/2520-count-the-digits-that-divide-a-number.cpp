class Solution {
public:
    int countDigits(int num) {
        long long orgnum = num;
        long long cnt =0;
    while(num != 0){
       long long d = num%10;
       if(orgnum % d == 0) cnt++;
       num = num/10;
    }
     return cnt;
    }
};