class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        int index=1;
        vector<int> ans(n,0);
        int sum=0;
        if(k>0){
            for(int i=1;i<=k;i++) sum+=code[i];
            ans[0]=sum;
            for(int i=1;i<n;i++){
                int left=(i+k)%n;
                sum+=code[left]-code[i];
                ans[i]=sum;
            }
        }else if(k==0){
            return ans;
        }else{
            // cout<<n-1<<" "<<n+k<<endl;
            for(int i=n-2;i>=n+k-1;i--) sum+=code[i];
            // cout<<sum;
            ans[n-1]=sum;
            for(int i=n-2;i>=0;i--){
                int left=(i+k+n)%n;
                // cout<<i+k<<" "<<i+k+n<<" "<<(left)<<endl;
                sum+=code[left]-code[i];
                ans[i]=sum;
            }
        }
        return ans;
    }
};