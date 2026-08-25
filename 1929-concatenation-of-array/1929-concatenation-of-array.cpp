class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        // vector<int> ans;
        nums.reserve(n+n);
        nums.insert(nums.end(), nums.begin(), nums.end());
        return nums;

    }
};