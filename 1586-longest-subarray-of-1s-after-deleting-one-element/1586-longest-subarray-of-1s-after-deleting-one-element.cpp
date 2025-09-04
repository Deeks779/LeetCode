class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int ans=0,l=0,r=0,count0=0;
        while(r<n){
            if(nums[r]==0) count0++;
            r++;
            if(count0<=1) ans=max(ans,r-l);
            while(count0>1){
                // ans=max()
                if(nums[l]==0) count0--;
                l++;
            }
        }
        return ans-1;
    }
};