class Solution {
    private:
    int helper(vector<int>& nums){
        int n=nums.size();
        int prev=nums[0];
        int prev2=0;
        for (int i=1;i<n;i++){
            int take=nums[i];
            if(i>1)take+=prev2;
            int dont=prev;
            int cur=max(take,dont);
            prev2=prev;
            prev=cur;
        }return prev;
    }
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> t1,t2;
        if(n==1)return nums[0];
        for(int i=1;i<n;i++){
            t1.push_back(nums[i]);
        }
        for(int i=0;i<n-1;i++){
            t2.push_back(nums[i]);
        }
        return max(helper(t1),helper(t2));
    }
};