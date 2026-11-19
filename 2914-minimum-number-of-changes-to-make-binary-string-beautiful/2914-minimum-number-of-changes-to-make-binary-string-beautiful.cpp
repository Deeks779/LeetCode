class Solution {
public:
    int minChanges(string s) {
        int n=s.size(), ans=0;
        // cout<<n/2<<"\n";
        for(int i=0;i<n;i=i+2){
            if(s[i]!=s[i+1]) ans++;
            // cout<<i<<" "<<s[i]<<" "<<s[i+1]<<endl; 
        }
        return ans;
    }
};