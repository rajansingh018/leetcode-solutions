class Solution {
public:
bool possibleOrNot(vector<int>& bloomDay, int day, int m, int k){
    int n = bloomDay.size();
    int cnt = 0, noOfBouq = 0; // cnt is cnt of bloomed flower
    for(int i=0; i<n; i++){
        if(bloomDay[i] <= day) cnt++;
        else{
            noOfBouq += (cnt/k);
            cnt = 0;
        }
    }
    noOfBouq += cnt/k;
    return noOfBouq >= m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long tfneeded = (long long)m*k;
        if(n<tfneeded) return -1;

        int mini = INT_MAX, maxi = INT_MIN;
        for(auto x: bloomDay){
            mini = min(mini, x);
            maxi = max(maxi, x);
        }
        int low = mini, high = maxi, ans = high;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(possibleOrNot(bloomDay, mid, m, k) == 1){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
};