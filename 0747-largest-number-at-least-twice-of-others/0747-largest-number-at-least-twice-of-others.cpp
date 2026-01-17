class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxI=0,n=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>n){
                n=nums[i];maxI=i;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(i!=maxI){
            if(2*nums[i]>n){
                return -1;
            }
            }
        }
        return maxI;
    }
};