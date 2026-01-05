class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        long long minSum=0;
        int count=0;
        long long smallest=LLONG_MAX;
        for(int i=0;i<n;i++){
            long long sum=0;
            for(int j=0;j<n;j++){
                long long num=abs(matrix[i][j]);
                smallest=min(smallest,num);
                if(matrix[i][j]<0) count++;
                sum+=num;
            }
            cout<<sum<<" "<<minSum<<" "<<smallest<<endl;
            minSum+=sum;
        }
        if(count%2!=0) minSum-=(2*smallest);
        return minSum;
    }
};