class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=queries.size();
        vector<int> ans(n,0);
        // bitset<8> binary_num()
        for(int i=0;i<n;i++){
            int start=queries[i][0],end=queries[i][1];
            cout<<start<<" ";
            int num=arr[start];
            // if(start==end) num=0;
            // else{
                start++;
            while(start<=end){
                num=num^arr[start];
                start++;
            }
            // }
            ans[i]=num;
        }
        return ans;
    }
};