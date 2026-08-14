class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int mx = -1, mxr = 0, mxc = 0;
        for(int r=0; r<m; r++){
            for(int c=0; c<n; c++){
                if(mat[r][c] > mx){
                    mx = mat[r][c];
                    mxr = r;
                    mxc = c;
            }
        }
        }
        return {mxr, mxc};
    }
};