class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int ans=nums[0];
        auto it=nums.begin();
        it++;
        sort(it,nums.end());
        ans+=nums[1]+nums[2];
        return ans;
    }
};