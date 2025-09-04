class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size(),sum=0,avg=0,ans=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        avg=sum/k;
        if(avg>=threshold) ans++;
        for(int i=k;i<n;i++){
            sum+=arr[i]-arr[i-k];
            avg=sum/k;
            if(avg>=threshold) ans++;
        }
        return ans;
    }
};