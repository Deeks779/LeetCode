class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n=nums.size()-2;
        if(n<=0) return {};
        vector<int> count(n,0);
        vector<int> ans;
        for(int i=0;i<n+2;i++){
            count[nums[i]]+=1;
        }
        int c=0;
        for(int i=0;i<n+1;i++){
            if(count[i]==2){
                ans.push_back(i);
                c++;
            }
            if(c==2){
                return ans;
            }
        }
        return ans;
    }
};