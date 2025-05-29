class Solution {
public:
    bool judgeCircle(string s) {
        vector<int> ori={0,0};
        vector<int> move=ori;
        int n=s.size();
        for(int i=0;i<n;++i){
            if(s[i]=='U'){
                move[0]++;
            }else if(s[i]=='D'){
                move[0]--;
            }else if(s[i]=='R'){
                move[1]++;
            }else{
                move[1]--;
            }
        }
        return move==ori;
    }
};