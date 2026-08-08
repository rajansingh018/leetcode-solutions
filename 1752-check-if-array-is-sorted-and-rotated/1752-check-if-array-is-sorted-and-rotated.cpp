class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int nb = 0;
        for(int i=0; i<n; i++){
            if(nums[(i+1)%n]<nums[i])
            nb = nb+1;
        }
        if(nb<=1)
        return true;
        else return false;
    }
};