class Solution {
public:
    bool hasSameDigits(string s) {
        int n=s.size();;
        while(n>2){
            string ans="";
            for(int i=0;i<n-1;i++){
                int a=((s[i]-'0')+(s[i+1]-'0'))%10;
                ans += to_string(a);
            }
            s=ans;
            n=s.size();
        }
        if (s.size() == 2 && s[0] == s[1]) {
            return true;
        }
        return false;
    }
};