class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0,f=0;
        for(int i=1;i<nums.size();i++){
            if(f==0){
                if(nums[i-1]==nums[i]){
                    f=1;
                    ans=nums[i];
                }
            }else{
                if(nums[i-1]==nums[i]) ans^=nums[i];
            }
        }
        return ans;
    }
};