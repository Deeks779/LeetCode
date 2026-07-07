class Solution {
public:
    long long sumAndMultiply(int n) {
        string num=to_string(n),ans="";
        long long sum=0, res;
        for(long long i=0;i<num.size();i++){
            if(num[i]!='0'){
                ans+=num[i];
                int a=num[i]-'0';
                sum+=a;
            }
        }
        if (ans=="") return 0;
        res=stoi(ans)*sum;
        return res;
    }
};