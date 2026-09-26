class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        long long sum_of_ranges = 0;
        for(int i=0; i<n; i++){
          int larg = nums[i], small = nums[i];
            for(int j=i; j<n; j++){
                larg = max(larg, nums[j]);
                small = min(small, nums[j]);
                sum_of_ranges += (larg - small);
            }
        }
        return sum_of_ranges;
    }
};