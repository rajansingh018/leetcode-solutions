class Solution {
public:
int sumofD(vector<int>& nums, int mid_divisor){
    int n = nums.size();
    int sum = 0;
    for(int i =0; i<n; i++){
        sum += ceil((double)nums[i]/(double)mid_divisor);
    }
    return sum;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size(); 
        int ans = 0;
        int low=1, high = *max_element(nums.begin(), nums.end());
        while(low <= high){
            int mid_divisor = low + (high-low)/2;
            if(sumofD(nums, mid_divisor) <= threshold){
                ans = mid_divisor;
                high = mid_divisor-1;
            }
            else low = mid_divisor+1;

        }
        return ans;
    }
};