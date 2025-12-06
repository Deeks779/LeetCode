class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=2;
        if(n<=2) return n;
        for(int j=2;j<n;j++){
            if(nums[j]!=nums[i-2]){
                nums[i]=nums[j];
                i++;
            }
        }
        return i;
        // Time Limit Exceeded at 169 test case
        // int n=nums.size(),l=0,r=n-1,k=0;
        // int num=nums[0], c=0;
        // while(l<=r){
        //     if(nums[l]==num) c++;
        //     else{
        //         c=1;
        //         num=nums[l];
        //     }
        //     if(c<=2){
        //         l++;
        //         k++;
        //     }else{
        //         nums[l]=nums[r];
        //         nums[r]++;
        //         sort(nums.begin()+l,nums.end());
        //         r--;
        //     }
        // }
        // return k;
    }
};