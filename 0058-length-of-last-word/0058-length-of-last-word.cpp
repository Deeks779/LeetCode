class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int c=0;
        int ans=0;
        for(int i=n-1;i>=0;i--){
           if(s[i]==' ' && c==1){
            break;
           }else if(s[i]!=' ' && c==1){
            ans++;
           }else if(s[i]!=' '&& c==0){
            ans++;c=1;
           }
        }
        return ans;
    }
};