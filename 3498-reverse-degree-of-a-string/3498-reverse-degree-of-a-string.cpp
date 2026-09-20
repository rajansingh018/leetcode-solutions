class Solution {
public:
    int reverseDegree(string s) {
        int n = s.length();
        long long sum = 0;
        int i = 1;
        for(char ch : s){
            sum += (123 - ch)*i;
            i++;
        }
        return sum;
    }
};