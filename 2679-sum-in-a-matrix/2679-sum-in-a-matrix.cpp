class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int m = nums.size();
        int n = nums[0].size();
        int score = 0;
        for(int i=0; i<m; i++){
            sort(nums[i].begin(), nums[i].end());
        }
        for(int j = 0; j<n; j++){
            int mxc = INT_MIN;
            for(int i=0; i<m; i++){
                mxc = max(mxc, nums[i][j]);
            }
            score = score + mxc;
        }
        
        return score;
        
    }
};