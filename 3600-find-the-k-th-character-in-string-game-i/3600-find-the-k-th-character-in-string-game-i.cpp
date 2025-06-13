class Solution {
public:
    char kthCharacter(int k) {
        string word="a";
        int n=word.size();
        while(n<=k){
            n=word.size();
            string str="";
            for(int i=0;i<n;i++){
                if(word[i]=='z'){
                    str+='a';
                }else{
                str+=word[i]+1;
                }
            }
            word+=str;
        }
        return word[k-1];
    }
};