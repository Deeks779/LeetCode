class Solution {
public:
    int numSub(string s) {
        int n=s.size();
        long long ans=0, mod=1000000007,c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                ans+=((c+1)*c)/2;
                c=0;
            }
            else{
                c++;
            }
        }
        if(c!=0){
            ans+=((c+1)*c)/2;
        }
        return ans%mod;
    }
};