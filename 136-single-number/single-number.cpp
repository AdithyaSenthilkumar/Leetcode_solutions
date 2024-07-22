class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int s;
        unordered_map<long long,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;}
        for(auto j:mp){
            if(j.second==1){
                 s=j.first;
            }
        }
        return s;}

};