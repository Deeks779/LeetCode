class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size(),l=0,r=0;
        set<int> ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(l<n && r<m){
            if(nums1[l]==nums2[r]){
                ans.insert(nums1[l]);
                l++;r++;
            }else{
                if(nums1[l]<nums2[r]){
                    l++;
                }else r++;
            }
        }
        vector<int> res(ans.begin(),ans.end());
        return res;
    }
};