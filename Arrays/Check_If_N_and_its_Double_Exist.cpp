class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        int i, j;
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(i != j && arr[i] == 2LL*arr[j]) return true;
            }
        }
        return false;
    }
};