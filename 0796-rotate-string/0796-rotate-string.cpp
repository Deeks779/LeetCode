class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size(),m=goal.size();
        if(n==m){
            string s1=s+s;
            if(s1.find(goal)!=string::npos) return true;
        }
        return false;
    }
};