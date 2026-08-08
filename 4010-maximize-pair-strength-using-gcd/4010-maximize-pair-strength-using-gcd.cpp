class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n = nums.size();
        long long max_strength = 0;
        for(int i=0; i<n; ++i){
            for(int j =i+1; j<n; ++j){
               long long g = gcd(nums[i], nums[j]);
               long long current_strength = (1LL * nums[i] * nums[j]) / (g * g);

                 max_strength = max(max_strength, current_strength);
            }
        }
        return max_strength;
    }
};