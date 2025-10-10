class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int n=nums.size();
        int maxOr=0,count=0;
        for(int i=0;i<n;i++) maxOr|=nums[i];
        for(int i=0;i<(1<<n);i++){
            int calOr=0;
            for(int j=0;j<n;j++){
                if((i&(1<<j))!=0){
                    calOr|=nums[j];
                }
            }
            if(calOr==maxOr) count++;
        }
        return count;
    }
};