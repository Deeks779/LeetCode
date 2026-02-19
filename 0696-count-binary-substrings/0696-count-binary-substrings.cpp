class Solution {
public:
    int countBinarySubstrings(string s) {
        int n=s.size();
        int ans=0,i=0,f=0;
        char cbit=s[0];
        vector<int> count(2,0);
        for(int i=0;i<n;i++){
            if(s[i]==cbit) count[cbit-'0']++;
            else{
                if(f==0){
                    f=1;
                    cbit=s[i];
                    count[cbit-'0']++;
                }else{
                    ans+=min(count[0],count[1]);
                    // cout<<count[0]<<" "<<count[1]<<" "<<ans<<endl;    
                    count[!(cbit-'0')]=0;
                    cbit=s[i];
                    count[cbit-'0']++;
                }
            }    
        }
        ans+=min(count[0],count[1]);
        return ans;
    }
};
// if(f==0){
//                 if(cbit==s[i]) count[cbit-'0']++;
//                 else{
//                     f=1;
//                     cbit=s[i];
//                     count[cbit-'0']++;
//                 }
//             }else{
//                 if(cbit==s[i]) count[cbit-'0']++;
//                 else{
//                     ans+=min(count[0],count[1]);
//                     f=0;
//                     cbit=s[i];
//                     count[cbit-'0']++;
//                 }
// }