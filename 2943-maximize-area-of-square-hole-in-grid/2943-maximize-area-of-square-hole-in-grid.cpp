class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        sort(hBars.begin(),hBars.end());
        sort(vBars.begin(),vBars.end());
        int h=0,v=0,temp=1;
        if(hBars.size()==1) h=1;
        if(vBars.size()==1) v=1;
        for(int i=1;i<hBars.size();i++){
            if(hBars[i]-hBars[i-1]==1){
                temp++;
            }else{
                temp=1;
            }
            h=max(temp,h);

        }
        temp=1;
        for(int i=1;i<vBars.size();i++){
            if(vBars[i]-vBars[i-1]==1){
                temp++;
            }else{
                temp=1;
            }
            v=max(temp,v);
        }
        int side=min(h+1,v+1);
        return side*side;
    }
};