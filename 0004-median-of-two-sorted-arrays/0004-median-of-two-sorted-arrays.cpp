class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged(nums1.size() + nums2.size());
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), merged.begin());
        int msize = merged.size();
        int low = 0, high = msize-1;
        int mid = low + (high-low)/2.0;
        double median;
        if(msize % 2 != 0){
            median = merged[mid];
        }
        else median = (merged[mid] + merged[mid+1])/2.0;

        return median;
    }
};