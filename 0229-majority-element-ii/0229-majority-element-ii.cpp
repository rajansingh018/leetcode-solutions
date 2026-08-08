class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        map<int, int> freq;
        int mini = (n/3) + 1;
        for(int x : nums){
            freq[x]++;
            if(freq[x] == mini){
                ans.push_back(x);
            }
            if(ans.size() == 2) break;
        }
        return ans;
    }
};