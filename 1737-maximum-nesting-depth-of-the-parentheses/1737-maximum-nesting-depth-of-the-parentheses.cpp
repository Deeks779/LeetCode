class Solution {
public:
    int maxDepth(string s) {
        stack<char> stack;
        int ans=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            // int m=0;
            if(s[i]=='('){
                // m++;
                stack.push(s[i]);
                int m=stack.size();
                ans=max(ans,m);
            }else if(s[i]==')'){
                stack.pop();
            }
        }
        return ans;
    }
};