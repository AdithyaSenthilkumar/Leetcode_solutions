class Solution {
    private:
    int helper(vector<int>& nums,int n, vector<int> &dp){
        if(n==0)return nums[n];
        if(n<0)return 0;
        if(dp[n]!=-1)return dp[n];
        int pick=nums[n]+helper(nums,n-2,dp);
        int dont=helper(nums,n-1,dp);
        return dp[n]=max(pick,dont);
    }
public:

    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        
        return helper(nums,n-1,dp);
        
    }
};