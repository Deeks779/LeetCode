class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<float> ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int l=0,r=n-1;
        for(int i=0;i<n/2;i++){
            float a=((float)nums[l]+nums[r])/2;
            ans.insert(a);
            l++;r--;
        }
        return ans.size();
    }
};