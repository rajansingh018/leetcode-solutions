class Solution {
public:
int signFunc(int x){
    if(x%2==0) return 1;
    else return -1;
}
    int arraySign(vector<int>& nums) {
        int cntn = 0;
        int n = nums.size();
        for(int num : nums){
            if(num == 0) return 0;
            else if(num < 0) cntn++;
        }
        return signFunc(cntn);
    }
};