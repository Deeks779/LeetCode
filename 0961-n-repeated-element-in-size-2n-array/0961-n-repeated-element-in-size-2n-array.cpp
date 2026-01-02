class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        set<int> isIn;
        isIn.insert(nums[0]);
        // sort(nums.begin(),nums.end());
        int n=nums.size(),ans;
        for(int i=1;i<n;i++){
            if(isIn.find(nums[i])!=isIn.end()){
                ans=nums[i];
                break;
            }else{
                isIn.insert(nums[i]);
            }

        }
        return ans;
    }
};