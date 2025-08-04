class Solution {
public:
    void swap(char &a,char &b){
        char t=a;
        a=b;
        b=t;
    }
    string reverseVowels(string s) {
        int n=s.size();
        int l=0,r=n-1;
        int lf=0,rf=0;
        while(l<r){
            if(s[l]=='a'||s[l]=='A'|| s[l]=='e'||s[l]=='E'|| s[l]=='i'||s[l]=='I'||
            s[l]=='o'||s[l]=='O'||s[l]=='u'||s[l]=='U'){
                lf=1;
            }
            if(s[r]=='a'||s[r]=='A'|| s[r]=='e'||s[r]=='E'|| s[r]=='i'||s[r]=='I'||
            s[r]=='o'||s[r]=='O'||s[r]=='u'||s[r]=='U'){
                rf=1;
            }
            if(lf==0) l++;
            if(rf==0) r--;
            if(lf==1 && rf==1 ){
                swap(s[l],s[r]);
                lf=0;l++;
                rf=0;r--;
            }
        }
        return s;
    }
};