class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++){
            string s=words[i];
            int l=0,r=s.size()-1;
            bool f=true;
            while(l<=r){
                if(s[l]!=s[r]){
                    f=false;
                    break;
                }
                l++;r--;
            }
            if(f) return words[i];
        }
        return "";
    }
};