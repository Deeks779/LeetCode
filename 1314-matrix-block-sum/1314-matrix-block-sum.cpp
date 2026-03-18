class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m=mat.size()+1,n=mat[0].size()+1;
        vector<vector<int>> prefix(m,vector<int>(n,0));
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                prefix[i][j]=mat[i-1][j-1]+prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1];
            }
        }
        vector<vector<int>> ans(m-1,vector<int>(n-1,0));
        for(int i=0;i<m-1;i++){
            for(int j=0;j<n-1;j++){
                int r1=max(0,i-k),r2=min(m-2,i+k);
                int c1=max(0,j-k),c2=min(n-2,j+k);
                ans[i][j]=prefix[r2+1][c2+1]+prefix[r1][c1]-prefix[r2+1][c1]-prefix[r1][c2+1];
                cout<<prefix[r1][c2+1]<<" ";
            }
        }
        return ans;
    }
};