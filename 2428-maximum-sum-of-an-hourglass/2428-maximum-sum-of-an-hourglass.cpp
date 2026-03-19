class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int m=grid.size()+1,n=grid[0].size()+1;
        long long ans=0;
        vector<vector<long long>> pre(m,vector<long long>(n,0));
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                pre[i][j]=grid[i-1][j-1]+pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1];
            }
        }
        for(int i=0;i<=m-4;i++){
            for(int j=0;j<=n-4;j++){
                int r1=i,c1=j;
                int r2=i+2,c2=j+2;
                int sum=pre[r2+1][c2+1]+pre[r1][c1]-pre[r1][c2+1]-pre[r2+1][c1]-grid[r1+1][c1]-grid[r1+1][c2];
                ans=ans>sum?ans:sum;
            }
        }
        return ans;
    }
};