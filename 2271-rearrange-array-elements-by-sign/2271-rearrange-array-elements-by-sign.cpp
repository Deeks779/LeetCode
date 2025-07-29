class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg;
        int m=nums.size();
        for(int i=0;i<m;i++){
            if(nums[i]>=0) pos.push_back(nums[i]); 
            else neg.push_back(nums[i]);
        }
        vector<int> ans;
        for(int i=0;i<m/2;i++){
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
        return ans;
    }
};