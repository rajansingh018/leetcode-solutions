class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int l = nums.size();
        sort(nums.begin(), nums.end());
        int maxSum=0;
        for(int i=0; i<l; i=i+2){
            maxSum += nums[i];
        }
        return maxSum;
    }
};