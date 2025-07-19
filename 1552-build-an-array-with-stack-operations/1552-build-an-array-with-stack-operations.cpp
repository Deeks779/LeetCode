class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int m=target.size();
        // ans.push_back("Push");
        int a=0;
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
            if(a<m){
            if(i!=target[a]){
                ans.push_back("Push");
                ans.push_back("Pop");
            }else{
                ans.push_back("Push");
                a++;
            }
            }else break;
        }
        return ans;
    }
};