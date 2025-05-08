class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<int> copy=candies;
        stable_sort(copy.begin(),copy.end());
        int maxNum=copy[n-1];
        vector<bool> ans(n,0);
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=maxNum){
                ans[i]=true;
            }
        }
        return ans;
    }
};