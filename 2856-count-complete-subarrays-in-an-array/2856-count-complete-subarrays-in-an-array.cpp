class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int> distictNum;
        int n=nums.size();
        for(int i=0;i<n;i++){
            distictNum.insert(nums[i]);
        }
        int distictN=static_cast<int>(distictNum.size()),ans=0;
        for(int i=0;i<n;i++){
            // set<int> temp;
            distictNum.clear();
            for(int j=i;j<n;j++){
                distictNum.insert(nums[j]);
                if(static_cast<int>(distictNum.size())==distictN) ans++;
            }
        }
        return ans;
    }
};