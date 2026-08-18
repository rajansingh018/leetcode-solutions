class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> runsum(n);
        int sum = 0;
        for(int i=0; i<n; i++){
            sum = sum + nums[i];
            runsum[i] = sum;
        }
     return runsum;
    }
};