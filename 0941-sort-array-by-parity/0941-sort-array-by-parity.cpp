class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size(),l=0,r=n-1,i=0;
        vector<int> ans(n,0);
        while(i<n){
            if(nums[i]%2==0){
                ans[l]=nums[i];
                l++;
            }else{
                ans[r]=nums[i];
                r--;
            }
            i++;
        }
        return ans;
    }
};