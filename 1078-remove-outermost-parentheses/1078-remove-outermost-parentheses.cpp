class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> stack;
        string ans="";
        int n=s.size();
        // stack.push(s[0]);
        for(int i=0;i<n;i++){
            if(stack.empty()){
                stack.push(s[i]);
            }else{
            if(stack.size()==1 && s[i]==')'){
                stack.pop();
            }else if(stack.size()==1 && s[i]=='('){
                stack.push(s[i]);
                ans+="(";
            }else{
                if(s[i]==')'){
                    stack.pop();
                    ans+=")";
                }else{
                    stack.push(s[i]);
                    ans+="(";
                }
            }
            }
        }
        return ans;
    }
};