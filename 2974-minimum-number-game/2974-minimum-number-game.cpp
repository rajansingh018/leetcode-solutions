class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int min_bob = INT_MAX;
        int min_alice = INT_MAX;
        sort(nums.begin(), nums.end());
        for(int i = 0; i<nums.size(); i = i+2){
            swap(nums[i], nums[i+1]);
        }
        return nums;
    }
};