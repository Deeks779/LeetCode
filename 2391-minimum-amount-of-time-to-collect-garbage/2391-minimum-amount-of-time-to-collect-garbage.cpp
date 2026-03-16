class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n=travel.size()+1;
        int ans=0;
        vector<int> s(n,0);
        s[1]=travel[0];
        for(int i=2;i<n;i++){
            s[i]=s[i-1]+travel[i-1];
        }
        vector<int> lastIndex(3,0);
        for(int i=0;i<garbage.size();i++){
            string str=garbage[i];
            ans+=str.size();
            if(str.find("M")!=string::npos) lastIndex[0]=i;
            if(str.find("P")!=string::npos) lastIndex[1]=i;
            if(str.find("G")!=string::npos) lastIndex[2]=i;
        }
        ans+=s[lastIndex[0]]+s[lastIndex[1]]+s[lastIndex[2]];
        return ans;
    }
};