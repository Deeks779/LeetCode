class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size()+1;
        vector<int> s(n,0);
        s[1]=arr[0];
        for(int i=2;i<n;i++){
            s[i]=s[i-1]+arr[i-1];
        }
        int ans=s[n-1];
        for(int i=3;i<n;i=i+2){
            for(int k=i;k<n;k++){
                ans+=s[k]-s[k-i];
            }
        }
        return ans;
    }
};