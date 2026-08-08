class Solution {
public:
    int bs(vector<int> &nums, int low, int high, int target){
        if(low > high) return -1;

        int mid = low + (high-low)/2;
        if(nums[mid] == target) return mid;
        else if(target > nums[mid]){
            low = mid+1;
            return bs(nums, low, high, target);
        }
        else{
            high = mid-1;
            return bs(nums, low, high, target);
        }
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
         return bs(nums, 0, n-1, target);
    }
};