class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        vector<int> p(n,0),s(n,0);
        int ans=0;
        p[0]=nums[0];
        s[0]=nums[n-1];
        for(int i=1;i<n;i++){
            p[i]=p[i-1]+nums[i];
            s[i]=s[i-1]+nums[n-1-i];
        }
        for(int i=0;i<n-1;i++){
                // cout<<i<<" "<<p[i]<<" "<<s[n-2-i]<<endl;
            if((s[n-2-i]-p[i])%2==0){
                ans++;
            }
        }
        return ans;
    }
};