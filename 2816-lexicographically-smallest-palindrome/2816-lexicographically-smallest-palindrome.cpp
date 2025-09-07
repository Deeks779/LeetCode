class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n=s.size(),l=0,r=n-1;
        while(l<=r){
            if(s[l]!=s[r]){
                int a=s[l]-'0',b=s[r]-'0';
                a>b?s[l]=s[r]:s[r]=s[l];
            }
            l++;r--;
        }
        return s;
    }
};