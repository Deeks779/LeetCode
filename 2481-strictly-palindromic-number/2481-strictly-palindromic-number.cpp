class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<=n-2;i++){
            string s=toBase(n,i);
            int l=0,r=s.size();
            while(l<=r){
                if(s[l]!=s[r]) return false;
            }
        }
        return false;
    }
    string toBase(int n,int b){
        if(n==0) return "0";
        string s="";
        while(n>0){
            int r=n%b;
            s+=to_string(r);
            n/=b;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};