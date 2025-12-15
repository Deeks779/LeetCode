class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int m=logs.size();
        map<int,int> c;
        c[logs[0][1]-0]=logs[0][0];
        for(int i=1;i<m;i++){
            int a=logs[i][1]-logs[i-1][1];
            auto it=c.find(a);
            if(it==c.end()){
                c[a]=logs[i][0];
            }else{
                int b=it->second;
                c[a]=min(logs[i][0],b);
            }
        }
        // auto it=prev(c.end());
        auto it=c.rbegin();
        return it->second;
    }
};