bool isPalindrome(int x) {
    long rev = 0, d , n;
    n = x;
    if(x<0){
        return false;
    }
    else if(x>=0){
         while(x!=0){
        d = x%10;
        rev = rev*10 + d;
        x = x/10;
    }
    if(rev==n){
        return true;
    }
    else return false;
    }
return 0;
   
}