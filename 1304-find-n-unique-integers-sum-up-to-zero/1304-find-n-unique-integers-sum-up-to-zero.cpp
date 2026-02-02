class Solution {
public:
    vector<int> sumZero(int n) {
        int t=n/2;
        vector<int> ans;
        if(n%2==0){
            while(t>0){
                ans.push_back(t);
                int m=t*(-1);
                ans.push_back(m);
                t--;
            }
        }else{
             while(t>0){
                ans.push_back(t);
                int m=t*(-1);
                ans.push_back(m);
                t--;
            }
            ans.push_back(0);
        }
        return ans;
    }
};