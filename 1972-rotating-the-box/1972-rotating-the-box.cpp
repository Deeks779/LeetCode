class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int n=boxGrid.size(),m=boxGrid[0].size();
        for(int i=0;i<n;i++){
            int l=m-1;
            for(int j=m-1;j>=0;j--){
                if(boxGrid[i][j]=='*') l=j-1;
                else if(boxGrid[i][j]=='#'){
                    if(l>=j){
                        char temp=boxGrid[i][l];
                        boxGrid[i][l]=boxGrid[i][j];
                        boxGrid[i][j]=temp;
                        l--;
                    }
                }
            }
        }
        vector<vector<char>> box(m,vector<char>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                box[i][j]=boxGrid[n-1-j][i];
            }
        }
        return box;
    }
};