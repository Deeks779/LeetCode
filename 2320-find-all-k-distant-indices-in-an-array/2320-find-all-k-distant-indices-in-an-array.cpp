class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int> count;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==key){   
                int start = std::max(0, i - k);
                int end = std::min(n - 1, i + k);
                for (int j = start; j <= end; ++j) {
                    count.insert(j);
                }
            }
        }
        vector<int> ans(count.begin(),count.end());
        return ans;
    }
};