class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int Esum = 0;
        int Dsum = 0;
        for(int i=0; i<n; i++){
            Esum += nums[i];
            while(nums[i]>0){
               int d = nums[i]%10;
               nums[i] = nums[i]/10;
               Dsum = Dsum + d;
            }
        }
        return abs(Esum - Dsum);
    }
};