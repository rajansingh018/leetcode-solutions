class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size(); // rows
        int n = grid[0].size(); // colmn
        int cnt = 0;
        int row = 0, col = n-1;

        while(row<m && col>=0){
            if(grid[row][col] < 0){
                cnt += (m - row); 
                col--;
            }
            else row++;
        }
        return cnt;
    }
};