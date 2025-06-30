class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==1) return 1; 
        set<char> character;
        int ans=0;
        int n=s.size();
        int i=0,j=0;
        while(i<n){
            if(character.find(s[i])==character.end()){
                character.insert(s[i]);
                ans=max(ans,i-j+1);
                i++;
            }else{
                character.erase(s[j]);
                j++;
            }
        }
        return ans;
    }
};