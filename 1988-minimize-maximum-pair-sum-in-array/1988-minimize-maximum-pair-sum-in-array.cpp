class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size(),sum=0,l=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;i++){
            sum=max(sum,nums[i]+nums[n-1-i]);
        }
        cout<<n;
        return sum;
    }
};