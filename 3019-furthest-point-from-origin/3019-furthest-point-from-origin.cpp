class Solution {
public:
    int furthestDistanceFromOrigin(string s) {
        int n=s.size();
        // s.sort();
        int r=0,l=0,u=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                l++;
            }else if(s[i]=='R'){
                r++;
            }else{
                u++;
            }
        }
        if(l>r){
            l+=u;
        }else{
            r+=u;
        }
        return abs(l-r);
    }
};