class Solution {
public:
    int commonFactors(int a, int b) {
        int n=min(a,b);
        if(n==0) return 0;
        int c=1;
        for(int i=2;i<=n;i++){
            if((a%i==0)&(b%i==0)){
                c++;
            }
        }
        return c;
    }
};