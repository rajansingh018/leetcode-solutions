class Solution {
public:
    int findMax(vector<int> &piles){
        int n = piles.size();
        int maxi = INT_MIN;
        for(int i=0; i<n; i++){
            maxi = max(maxi, piles[i]);
        }
        return maxi;
    }
    long long caltotalhrs(vector<int>& piles, int hourly){
        int n = piles.size();
        long long ttlhrs = 0;
        for(int i=0; i<n; i++){
            ttlhrs += ceil((double)piles[i] / (double)hourly);
        }
        return ttlhrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low =1, high = findMax(piles);
        while(low<=high){
            int mid = low + (high-low)/2;
            long long totalhrs = caltotalhrs(piles, mid);
            if(totalhrs <= h){
                
                high = mid-1;
            }
            else low = mid+1;
        }
        return low;
    }
};