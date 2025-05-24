class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=first(nums, target);
        int n1=last(nums, target);
        return {n,n1};
    }
    int first(vector<int>& nums, int t){
        int ans=-1;
        int n=nums.size();
        int l=0,r=n-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==t){
                ans=mid;
                r=mid-1;
            }else if(nums[mid]<t){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return ans;
    }
    int last(vector<int>& nums, int t){
        int ans=-1;
        int n=nums.size();
        int l=0,r=n-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==t){
                ans=mid;
                l=mid+1;
            }else if(nums[mid]<t){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return ans;
    }
};