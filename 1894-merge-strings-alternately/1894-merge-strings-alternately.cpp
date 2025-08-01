class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.size(),n2=word2.size();
        int n=min(n1,n2);
        int j=0;
        string ans="";
        for(int i=0;i<n;i++){
            ans+=word1[i];ans+=word2[i];
            j++;
        }
        if(n1>n2){
            for(int i=j;i<n1;i++){
                ans+=word1[i];
            }
        }else{
            for(int i=j;i<n2;i++){
                ans+=word2[i];
            }
        }
        return ans;
    }
};