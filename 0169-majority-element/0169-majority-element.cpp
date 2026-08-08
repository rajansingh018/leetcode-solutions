class Solution {
public:
    //This is better soln of TC O(nlogn)+O(n) and SC=O(n)
    int majorityElement(vector<int>& nums) {
        map<int, int> mpp;
        int n=nums.size();
       for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp){
            if(it.second > (n/2)){
                return it.first;
            }
        }
        return -1;

    }
};