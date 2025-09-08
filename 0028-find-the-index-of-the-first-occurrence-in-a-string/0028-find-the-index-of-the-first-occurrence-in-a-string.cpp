class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size(),m=needle.size(),l=0,r=0;
        cout<<n-m;
        while(l<n-m+1){
            if(haystack[l]==needle[0]){
                bool f=true;
                int j=l;
                for(int i=0;i<m;i++){
                    if(haystack[j]!=needle[i]){
                        f=false;
                        break;
                    }
                    j++;
                }
                if(f) return l;
            }
            l++;
        }
        return -1;
    }
};