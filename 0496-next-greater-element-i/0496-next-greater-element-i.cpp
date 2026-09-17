class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        unordered_map<int, int> nextGreaterMap;
        vector<int> ans;
        stack<int> st;
        for(int num: nums2){
            while(!st.empty() && st.top()<num){
                nextGreaterMap[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }
        for (int num : nums1) {
            if(nextGreaterMap.count(num)) {
                ans.push_back(nextGreaterMap[num]);
            } else {
                ans.push_back(-1);
            }
        }

        return ans;
    }
};