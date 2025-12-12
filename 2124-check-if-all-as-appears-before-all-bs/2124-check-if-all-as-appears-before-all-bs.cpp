class Solution {
public:
    bool checkString(string s) {
        int n=s.size(),ans=true,c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a'&&c==0) continue;
            else if(s[i]=='a' && c==1){
                ans=false;
                break;
            }else{
                c=1;
            }
        }
        return ans;
    }
};