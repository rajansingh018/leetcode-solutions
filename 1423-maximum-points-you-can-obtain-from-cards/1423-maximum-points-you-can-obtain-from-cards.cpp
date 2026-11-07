class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l = cardPoints.size();
        int leftSum = 0 , rightSum=0;
        int maxScore = INT_MIN;
        for(int i=0; i<k; i++){
            leftSum += cardPoints[i];
        }
        if(l == k) return leftSum;
        maxScore = leftSum;
        int rightIndex = l-1;
        for(int i=k-1; i>=0; i--){
            leftSum -= cardPoints[i];
            rightSum += cardPoints[rightIndex];
            rightIndex--;
            maxScore = max(maxScore, leftSum+rightSum);
        }
        return maxScore;
    }
};