class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=n-1;i>1;i--){
            if(nums[i-2]+nums[i-1]>nums[i]) return nums[i-2]+nums[i-1]+nums[i];
        }
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         for(int k=j+1;k<n;k++){
        //             if((nums[i]+nums[j]>nums[k])&&(nums[i]+nums[k]>nums[j])&&(nums[k]+nums[j]>nums[i])){
        //                 int a=nums[i]+nums[j]+nums[k];
        //                 ans=max(ans,a);
        //             }
        //         }
        //     }
        // }
        return ans;
    }
};