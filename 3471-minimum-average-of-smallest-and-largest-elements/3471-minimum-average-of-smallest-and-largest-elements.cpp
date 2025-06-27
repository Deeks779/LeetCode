class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n=nums.size();
        double ans=INT_MAX;
        sort(nums.begin(),nums.end());
        int l=0,r=n-1;
        for(int i=0;i<n/2;i++){
            double a=((double)nums[l]+nums[r])/2;
            ans=min(ans,a);
            l++;r--;
        }
        return ans;
    }
};