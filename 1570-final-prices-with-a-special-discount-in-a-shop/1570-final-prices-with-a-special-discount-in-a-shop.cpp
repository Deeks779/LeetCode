class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int> ans;
        for(int i=0;i<n-1;i++){
            int a=prices[i];
            int c=0;
            for(int j=i+1;j<n;j++){
                if(prices[j]<=prices[i]){
                    c=prices[j];
                    break;
                }
            }
            int b=a-c;
            ans.push_back(b);
        }
        ans.push_back(prices[n-1]);
        return ans;
    }
};