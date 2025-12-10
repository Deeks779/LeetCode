class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size(),i=0;
        while(i<n){
            int f=nums[i],val=nums[i+1];
            for(int j=0;j<f;j++) ans.push_back(val);
            i+=2;
        }
        return ans;
    }
};