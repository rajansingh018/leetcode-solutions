class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        if(n==1) return true;
        int min_odd = INT_MAX;
        for (int x : nums1) {
            if (x % 2 != 0) {
                min_odd = min(min_odd, x);
            }
        }
        for (int x : nums1) {
            if (x%2 == 0 && min_odd != INT_MAX && x<min_odd) {
                return false;
            }
        }
        return true;
    }
};