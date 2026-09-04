class Solution {
public:
int maxfn(vector<int>& nums, int i){
    int mx = INT_MIN;
    for(int j=0; j<=i; j++){
        mx = max(nums[j], mx);
    }
    return mx;
}
int minfn(vector<int>& nums, int i){
    int n= nums.size();
    int mn = INT_MAX;
    for(int j=i; j<n; j++){
        mn = min(nums[j], mn);
    }
    return mn;
}
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==1 && k==0) return 0;
        if(n==1 && k!=0) return 0;
        int inscr = 0;
        for(int i=0; i<n; i++){
            inscr = maxfn(nums, i) - minfn(nums, i);
            if(inscr <= k) return i;
        }
        return -1;
    }
};