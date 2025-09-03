class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int ans=0,count=0,l=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0){
                k--;
                count=0;
            }
            while(k==0){
                count++;
                if(nums[l]%2!=0){
                    k++;
                }
                l++;
            }
            ans+=count;
        }
        return ans;
        // int n=nums.size();
        // int l=0,countOdd=0,ans=0;
        // for(int r=0;r<n;r++){
        //     if(nums[r]%2 !=0) countOdd++;
        //     if(countOdd==k) ans++;
        //     while(countOdd>k){
        //         if(countOdd==k) ans++;
        //         if(countOdd>k){
        //             if(nums[l]%2!=0) countOdd--;
        //             l++;
        //         }
        //     }
        // }
        // return ans;
    }
};