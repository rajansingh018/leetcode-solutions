class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0];
        int j;
        int mxi = nums[0];
            for(j=1; j<n; j++){
            if(nums[j]>nums[j-1]){
                sum += nums[j];
            }
            else {
                sum = nums[j];
            }
            mxi = max(mxi, sum);
            }
        return mxi;
    }
};