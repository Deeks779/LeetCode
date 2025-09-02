class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int> distinctNum(nums.begin(),nums.end());
        int k=distinctNum.size();
        int n=nums.size();
        int l=0,ans=0;
        unordered_map<int,int> count;
        for(int r=0;r<n;r++){
            count[nums[r]]++;
            while(count.size()==k){
                ans+=n-r;
                count[nums[l]]--;
                if(count[nums[l]]==0) count.erase(nums[l]);
                l++;
            }
        }
        return ans;
        // set<int> distictNum;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     distictNum.insert(nums[i]);
        // }
        // int distictN=static_cast<int>(distictNum.size()),ans=0;
        // for(int i=0;i<n;i++){
        //     // set<int> temp;
        //     distictNum.clear();
        //     for(int j=i;j<n;j++){
        //         distictNum.insert(nums[j]);
        //         if(static_cast<int>(distictNum.size())==distictN) ans++;
        //     }
        // }
        // return ans;
    }
};