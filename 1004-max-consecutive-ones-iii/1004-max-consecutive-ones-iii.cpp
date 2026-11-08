class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxLen=0, l=0, r=0, cnt0=0;
        while(r<n){
            if(nums[r]==0) cnt0++;
            while(cnt0 > k){
                if(nums[l]==0) cnt0--;
                l++;
            }
            if(cnt0 <= k){
                int len = r-l+1;
                maxLen = max(maxLen, len);
            }
            r++;
        }
        return maxLen;
    }
};