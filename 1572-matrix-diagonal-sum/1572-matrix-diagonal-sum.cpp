class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum1 = 0, sum2 = 0, sum;
        if(n==1) return sum = mat[0][0];
        for(int i = 0; i<n; i++){
            for(int j = n-1; j>=0; j--){
            sum1 += mat[i][i];
            if(j == i) goto cont_loop;
            sum2 += mat[i][j];
            cont_loop : i++;
        }

        }
        return sum = sum1+sum2;
    }
};