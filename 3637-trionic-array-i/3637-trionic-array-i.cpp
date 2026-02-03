class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int d=nums.size();
        int p=0,c=0;
        bool ans=true;
        for(int i=1;i<d;i++){
            if(nums[i-1]==nums[i]) return false;
            if(p==0){
                if(nums[i-1]<nums[i]) c++;
                else{
                    if(c==0) return false;
                    c=0;
                    p=1;
                }
            }
            if(p==1){
                if(nums[i-1]>nums[i]) c++;
                else{
                    if(c==0) return false;
                    c=0;
                    p=2;
                }
            }
            if(p==2){
                if(nums[i-1]>nums[i]) return false;
                if(nums[i-1]<nums[i]) c++;
            }
        }
        if(p==2 && c!=0) return true;
        return false;
    }
};