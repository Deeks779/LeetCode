class Solution {
public:
    bool check(string a,string b,map<char,int> rank){
        bool ans=false;
        if(a==b && a.size()==b.size()) ans=true;
        int n=min(a.size(),b.size());
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                if((rank[a[i]]<rank[b[i]])){
                    ans= true;
                    break;
                }
                else{
                    ans= false;
                    break;
                }
            }else{
                if(i==n-1 && !ans && a.size()<b.size()){
                    ans=true;
                }
            }
        }
        // if(a.size()<b.size())
        return ans;
    }
    bool isAlienSorted(vector<string>& words, string order) {
        map<char,int> rank;
        for(int i=0;i<order.size();i++){
            rank[order[i]]=i;
        }
        for(int i=0;i<words.size()-1;i++){
            if(!check(words[i],words[i+1],rank)) return false;
        }
        return true;
    }
};