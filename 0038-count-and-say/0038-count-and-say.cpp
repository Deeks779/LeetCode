class Solution {
public:
    string RLE(string s){
        string ans="";
        int i=0,m=s.size();
        while(i<m){
            char c=s[i];
            int count=0;
            while(i<m && c==s[i]){
                count++;
                i++;
            }
            string s1=to_string(count);
            for(char x: s1) ans+=x;
            count=0;
            ans+=c;
        }
        return ans;
    }
    string countAndSay(int n) {
        if(n==1) return "1";
        string s="1";
        while(n>1){
            cout<<s<<endl;
            s=RLE(s);
            n--;
        }   
        return s;     
    }
};