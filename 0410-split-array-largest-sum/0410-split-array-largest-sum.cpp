class Solution {
public:
bool isPossible(vector<int>& nums, int k, int maxSum){
    int cnt = 1; // since subarray= arr atleast 1 to hoga hi
    int crntSum = 0;
    for(int num : nums){
        if(crntSum + num > maxSum){
            cnt ++;
            crntSum = num; // to start new subarray
        }
        else crntSum += num;
    }
    return cnt <= k;
    
}
    int splitArray(vector<int>& nums, int k) {
        long long low = *max_element(nums.begin(), nums.end());
        long long high = accumulate(nums.begin(), nums.end(), 0);
        int ans = high;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(isPossible(nums, k, mid)){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
};