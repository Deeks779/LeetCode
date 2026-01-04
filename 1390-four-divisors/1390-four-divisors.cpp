class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n=nums.size(),totalSum=0;
        for(int i=0;i<n;i++){
                int sum=0;
                int count=0;
            for(int j=1;j*j<=nums[i];j++){
                if(nums[i]%j==0){
                    sum+=j;
                    count++;
                    if(j!=(nums[i]/j)){
                        sum+=nums[i]/j;
                        count++;
                    }
                }
            }
            cout<<count<<" "<<sum<<" "<<endl;
            if(count==4) totalSum+=sum;
        }
        return totalSum;
    }
};