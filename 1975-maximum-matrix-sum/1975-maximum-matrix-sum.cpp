class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        long long minSum=0;
        int count=0;
        int smallest=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int num=abs(matrix[i][j]);
                smallest=min(smallest,num);
                if(matrix[i][j]<0) count++;
                minSum+=num;
            }
        }
        if(count%2!=0) minSum-=(2*smallest);
        return minSum;
    }
};