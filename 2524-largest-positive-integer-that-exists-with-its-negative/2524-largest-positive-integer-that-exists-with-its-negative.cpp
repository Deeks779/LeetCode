class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n=nums.size(),l=n-1,r=0,ans=-1;
        sort(nums.begin(),nums.end());
        if(nums[0]>0 || nums[n-1]<0) return -1;
        while(nums[l]>0){
            r=0;
            while(nums[r]<0){
                if(nums[l]==abs(nums[r]) && nums[r]<0){
                    ans=max(ans,nums[l]);
                    break;
                }
                r++;
            }
            l--;
        }
        return ans;
    }
};