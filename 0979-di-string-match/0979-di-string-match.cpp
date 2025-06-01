class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.size();
        vector<int> ans;
        int l=0;
        int h=n;
        for(int i=0;i<n;i++){
            if(s[i]=='I'){
                ans.push_back(l);
                l++;
            }else{
                ans.push_back(h);
                h--;
            }
        }
        ans.push_back(l);
        return ans;
    }
};