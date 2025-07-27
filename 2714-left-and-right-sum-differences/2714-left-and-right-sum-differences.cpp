class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans,lsum,rsum;
        int n=nums.size();
        int l=0,r=n-1,ls=0,rs=0;
        lsum.push_back(0);
        rsum.push_back(0);
        for(int i=0;i<n-1;i++){
            ls+=nums[l]; rs+=nums[r];
            lsum.push_back(ls);
            rsum.push_back(rs);
            l++;r--;
        }
        for(int i=0;i<n;i++){
            ans.push_back(abs(lsum[i]-rsum[n-1-i]));
        }
        return ans;
    }
};