class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low=0, high = n-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target) return mid;
            // if target is in left sorted half
            if(nums[low]<=nums[mid]){
                if(target >= nums[low] && target<=nums[mid]){
                    high = mid-1;
                }
                else low = mid+1;
            }
            // if target is in right sorted half
            else{
                if(target<=nums[high] && target>=nums[mid]){
                    low = mid+1;
                }
                else high = mid-1;
            }
        }
        return -1;
    }
};