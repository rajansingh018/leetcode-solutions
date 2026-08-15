class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        bool non_zero = false;
        int total_xor = 0;
        for(int x : nums){
            total_xor ^= x;
            if(x > 0){
                non_zero = true;
            }
        }
        if(total_xor != 0) return n;
        else if(non_zero && total_xor == 0){
            return n-1;
        }
        return 0;
    }
};