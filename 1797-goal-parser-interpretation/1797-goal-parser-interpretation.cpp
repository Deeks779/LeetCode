class Solution {
public:
    string interpret(string s) {
        int n=s.size();
        string ans="";
        int i=0;
        while(i<n){
            if(s[i]=='G'){
                ans+='G';
                i++;
            }
            else{
                if(s[i]=='(' && s[i+1]==')'){
                    ans+='o';
                    i+=2;
                }else{
                    ans+="al";
                    i+=4;
                }
            }
        }
        return ans;
    }
};