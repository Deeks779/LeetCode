class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        vector<string> word;
        string w="";
        for(int i=0;i<n;i++){
            if(s[i]!=' ') w+=s[i];
            else{
                word.push_back(w);
                w="";
            }
        }
        word.push_back(w);
        string ans="";
        int m=word.size();
        for(int i=0;i<m;i++){
            reverse(word[i].begin(),word[i].end());
            if(i==m-1) ans+=word[i];
            else{
                ans+=word[i];
                ans+=" ";
            }
        }
        return ans;
    }
};