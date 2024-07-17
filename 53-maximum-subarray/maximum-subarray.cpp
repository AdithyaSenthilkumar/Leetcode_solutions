class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int cs=0;
        int largest=INT_MIN;
        if (n==1) return nums[0];
        for(int i=0;i<n;i++){
            cs+=nums[i];
            if(cs>largest)largest=cs;
            if(cs<0)cs=0;
            
        }
        return largest;
    }
};