class Solution {
public:
    int pivotInteger(int n) {
        vector<int> p(n+1,0),s(n+1,0);
        int ans=-1;
        for(int i=1;i<=n;i++){
            p[i]=p[i-1]+i;
            s[n-i]=s[n-i+1]+n-i+1;
        }
        for(int i=1;i<=n;i++){
            if(p[i]==s[i-1]) return i;
        }
        return ans;
    }
};