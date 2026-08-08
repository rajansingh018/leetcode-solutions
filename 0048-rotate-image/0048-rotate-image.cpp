class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        //Step 1 Transpose
        for(int i = 0; i<n; i++){
            for(int j=i; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        // step 2 reverse all rows of transposed matrix
        for(auto& row : matrix){
            reverse(row.begin(), row.end());
        }
       
    }
};