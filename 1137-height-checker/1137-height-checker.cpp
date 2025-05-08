class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n=heights.size();
        int ans=0;
        vector<int> ex=heights;
        stable_sort(ex.begin(),ex.end());
        for(int i=0;i<n;i++){
            if(heights[i] != ex[i]){
                ans++;
            }
        }
        return ans;
    }
};