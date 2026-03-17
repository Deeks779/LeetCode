class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size()+1;
        vector<int> s(n,0);
        int ans=0;
        for(int i=0;i<n-1;i++){
            s[i+1]=s[i]+gain[i];
            ans=max(ans,s[i+1]);
        }
        return ans;
    }
};