class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n = nums.size();
        deque<int> flipStart;
        int ans = 0;

        for (int i = 0; i < n; ++i) {
            if (!flipStart.empty() && flipStart.front() + k <= i) {
                flipStart.pop_front();
            }

            int flipped = flipStart.size() % 2;
            if ((nums[i] ^ flipped) == 0) {
                if (i + k > n) return -1;
                flipStart.push_back(i);
                ans++;
            }
        }

        return ans;
        // int n=nums.size();
        // int c=0;
        // for(int i=0;i<n-k+1;i++){
        //     if(nums[i]==0){
        //         nums[i]=1;
        //         c++;
        //         for(int j=1;j<k;j++){
        //             nums[i+j]=(nums[i+j]==0?1:0);
        //         }
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     if(nums[i]==0) return -1;
        // }
        // return c;
    }
};