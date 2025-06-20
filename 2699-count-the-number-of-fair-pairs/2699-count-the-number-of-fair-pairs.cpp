class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        long long ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int l=lower_bound(nums.begin()+1+i,nums.end(),lower-nums[i])-nums.begin();
            int r=upper_bound(nums.begin()+1+i,nums.end(),upper-nums[i])-nums.begin()-1;
            if(l<=r){
                ans+=r-l+1;
            }
        }
        return ans;
    }
};