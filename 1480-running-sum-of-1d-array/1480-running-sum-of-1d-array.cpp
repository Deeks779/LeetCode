class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> s(n,0);
        s[0]=nums[0];
        for(int i=1;i<n;i++){
            s[i]=s[i-1]+nums[i];
        }
        return s;
    }
};