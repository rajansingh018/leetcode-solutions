class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n = nums.size();
        int smallCnt = 0;
        int targetCnt = 0;
        for(int x: nums){
            if(x<target) smallCnt++;
            else if(x==target) targetCnt++;
        }
        vector<int> ans;
        for(int i=0; i<targetCnt; i++){
            ans.push_back(smallCnt + i);
        }
        return ans;
    }
};