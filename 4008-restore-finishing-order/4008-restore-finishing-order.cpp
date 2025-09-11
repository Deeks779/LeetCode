class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        set<int> f(friends.begin(),friends.end());
        vector<int> ans;
        int n=order.size();
        for(int i=0;i<n;i++){
            if(f.find(order[i])!=f.end()) ans.push_back(order[i]);
        }
        return ans;
    }
};