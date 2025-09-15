class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int> sum;
        int ans=0,n=nums.size(),m=queries.size();
        for(int i=0;i<n;i++){
            ans+=nums[i];
            sum.push_back(ans);
        }
        for(int i=0;i<m;i++){
            int l=0,h=n-1,ans=0;
            while(l<=h){
                int mid=l+(h-l)/2;
                if(sum[mid]<=queries[i]){
                    ans=mid+1;
                    l=mid+1;
                }else h=mid-1;
            }
            // ans==0?ans=0:ans++;
            queries[i]=ans;
        }
        return queries;
    }
};