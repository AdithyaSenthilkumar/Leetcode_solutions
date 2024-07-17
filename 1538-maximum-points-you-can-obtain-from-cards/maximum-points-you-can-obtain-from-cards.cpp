class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int r=n-1;
        int maxsum=0;
        int lsum=0,rsum=0;
        for(int i=0;i<=k-1;i++)
            lsum=lsum+cardPoints[i];
        maxsum=lsum;
        for(int j=k-1;j>=0;j--){
            lsum=lsum-cardPoints[j];
            rsum=rsum+cardPoints[r];
            r--;
            maxsum=max(maxsum,lsum+rsum);
        }
        return maxsum;
    }
};