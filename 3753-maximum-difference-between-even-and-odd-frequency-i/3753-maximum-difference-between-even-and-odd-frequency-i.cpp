class Solution {
public:
    int maxDifference(string s) {
        vector<int> c(26,0);
        int n=s.size();
        int even=INT_MAX,odd=INT_MIN;
        for(int i=0;i<n;i++){
            c[(s[i]-'0')-49]++;
        }
        for(int i=0;i<26;i++){
            if(c[i]==0) continue;
            if(c[i]%2==0){
                even=min(even,c[i]);
            }else{
                odd=max(odd,c[i]);
            }
        }
        return odd-even;
    }
};