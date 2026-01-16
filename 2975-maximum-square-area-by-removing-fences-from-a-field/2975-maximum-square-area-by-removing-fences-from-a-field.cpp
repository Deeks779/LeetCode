class Solution {
public:
    int maximizeSquareArea(int m, int n, vector<int>& hFences, vector<int>& vFences) {
        const int MOD = 1000000007;
        hFences.push_back(1);hFences.push_back(m); 
        sort(hFences.begin(),hFences.end());
        vFences.push_back(1);vFences.push_back(n);
        sort(vFences.begin(),vFences.end());
        // To avoid TLE
        // set<int> hDist; 
        set<int> vDist;
        for(int i=0;i<vFences.size();i++){
            for(int j=i+1;j<vFences.size();j++){
                vDist.insert(vFences[j]-vFences[i]);
            }
        }
        int side=0;
        for(int i=0;i<hFences.size();i++){
            for(int j=i+1;j<hFences.size();j++){
                int d=hFences[j]-hFences[i];
                if(vDist.find(d)!=vDist.end()) side=max(side,d);
            }
        }
        // To avoid TLE
        // for(auto it=hDist.begin();it!=hDist.end();it++){
        //     if(vDist.find(*it)!=vDist.end()) side=max(side,*it);
        // }
        if(side==0) return -1;
        long long ar=1LL*side*side;
        return ar % MOD;
    }
};