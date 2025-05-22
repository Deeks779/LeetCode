class Solution {
public:
    string clearDigits(string s) {
        stack<char> ch;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='0'|| s[i]=='1'|| s[i]=='2'|| s[i]=='3'|| s[i]=='4'|| s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9'){
                ch.pop();
            }else{
                ch.push(s[i]);
            }
        }
        string result = "";
        while (!ch.empty()) {
            result += ch.top();
            ch.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
    
};