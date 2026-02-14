class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;
        int m=0;
        for(int bit : nums){
            m = (m * 2 + bit) % 5;
            ans.push_back(m == 0);
        }
        return ans;
    }
};