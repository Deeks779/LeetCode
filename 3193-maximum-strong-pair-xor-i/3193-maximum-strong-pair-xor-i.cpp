class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(abs(nums[i]-nums[j])<=min(nums[i],nums[j])){
                    int m=(nums[i]^nums[j]);
                    // cout<<m<<endl;
                    ans=max(ans,m);
                }
            }
        }
        return ans;
    }
};