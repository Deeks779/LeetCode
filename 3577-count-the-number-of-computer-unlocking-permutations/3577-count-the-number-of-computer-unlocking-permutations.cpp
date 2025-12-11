class Solution {
public:
    const int MOD = 1'000'000'007;
    long long int fact(long long int n){
        if(n==0||n==1) return 1;
        return (n*fact(n-1))%MOD;
    }
    int countPermutations(vector<int>& complexity) {
        int n=complexity.size(),m=complexity[0];
        long long int ans=0;
        sort(complexity.begin(),complexity.end());
        if(m==complexity[0]&&m!=complexity[1]){
            ans+=fact(n-1);
        }
        // set<int> count;
        //     if(count.find(m)==count.end()){
        //         count.insert(m);
        //     if(m==*min_element(complexity.begin()+i,complexity.end())){
        //         ans+=fact(n-1-i);
        //     }
        //     }
        return int(ans%MOD);
    }
};