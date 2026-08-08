class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        if (nums.empty()) return {};
        int n = nums.size();
        int mn = INT_MAX;
        int mx = INT_MIN;
        for(int x: nums){
            mn = min(mn, x);
            mx = max(mx, x);
        }
        vector<int> result;
        unordered_set<int> num_set(nums.begin(), nums.end());
        for(int i = mn+1; i<mx; i++){
            if (num_set.find(i) == num_set.end()) { // means if i doesnt exist in num_set
                result.push_back(i);
            }
        }
        return result;
    }
};