class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n=nums.size(),count=0;
        sort(nums.begin(),nums.end());
        while(n>=2){
            int i=0,j=n-2;
            while(i<j){
                if((nums[i]+nums[j])>nums[n-1]){
                    count+=j-i;
                    j--;
                }else{
                    i++;
                }
            } 
            n--;
        }
        return count;
    }
};