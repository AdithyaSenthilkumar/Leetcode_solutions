class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans;
        int req;
        for(int i=0;i<nums.size();i++){
            req=target-nums[i];
            for(int j=0;j<nums.size();j++){
                if(i!=j && nums[j]==req){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }

        }return ans;
        

        
    }
};