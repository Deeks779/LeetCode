class Solution {
public:
    string compressedString(string word) {
        string s="";
        int n=word.size(),count=0,i=0;
        while(i<n){
            char c=word[i];
            while(i<n && c==word[i]){
                count++;
                i++;
                if(count==9){
                    s+="9";
                    count=0;
                    s+=c;
                }
            }
            if(count!=0){
                string s1=to_string(count);
                for(char x:s1) s+=x;
                s+=c;
            }
            count=0;
        }
        return s;
    }
};