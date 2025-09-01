class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int ans=0;
        int n=s.size();
        // int l=0,r=0;
        for(int i=0;i<n;i++){
            int count1=0,count0=0;
            for(int j=i;j<n;j++){
                s[j]=='0'?count0++:count1++;
                // cout<<count1<<" "<<count0<<endl;
                if(count1<=k || count0<=k) ans++;
            }
        }
        return ans;
    }
};