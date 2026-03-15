class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n=nums.size();
        vector<int> s(n,0);
        s[0]=nums[0];
        for(int i=1;i<n;i++){
            s[i]=s[i-1]+nums[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int start=max(0,i-nums[i]);
            if(start==0){
                ans+=s[i];
            }else{
                ans+=s[i]-s[start-1];
            }
        }
        return ans;
    }
};