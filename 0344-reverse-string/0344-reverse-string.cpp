class Solution {
public:
    void reverseString(vector<char>& s) {
        // reverse(s.begin(),s.end());
        // return s;
        int n=s.size();
        for(int i=0;i<n/2;i++){
            char t=s[i];
            s[i]=s[n-1-i];
            s[n-1-i]=t;
        }
    }
};