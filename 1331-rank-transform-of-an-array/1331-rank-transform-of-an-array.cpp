class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> rank=arr;
        sort(rank.begin(),rank.end());
        rank.erase(unique(rank.begin(),rank.end()),rank.end());
        int n=arr.size();
        unordered_map<int, int> r;
        for (int i = 0; i < rank.size(); i++) {
            r[rank[i]] = i+1;  
        }
        for(int i=0;i<n;i++){
            arr[i]=r[arr[i]];
        }
        // while(it!=arr.end()){
        //     int c=1;
        //     for(auto i=rank.begin();i!=rank.end();i++){
        //         if(*i==*it){
        //             *it=c;
        //             break;
        //         }
        //         c++;
        //     }
        //     it++;
        // }
        return arr;
    }
};