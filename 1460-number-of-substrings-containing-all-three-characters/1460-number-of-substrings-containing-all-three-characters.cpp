class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size(),l=0,r=0,ans=0;
        map<char,int> count;
        count['a']=0;
        count['b']=0;
        count['c']=0;
        // count[s[l]]++;
        while(r<n){
            count[s[r]]++;
            while(count['a']>=1 && count['b']>=1 && count['c']>=1){
                ans+=n-r;
                count[s[l]]--;
                l++;
            }
            r++;
        }
        return ans;
    }
};