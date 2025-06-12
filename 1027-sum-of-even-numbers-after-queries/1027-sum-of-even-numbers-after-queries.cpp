class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n=queries.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int sum=0;
            nums[queries[i][1]]+=queries[i][0];
            for (int number : nums) {
                if(isEven(number)) sum+=number;
            }
            ans.push_back(sum);
        }
        return ans;
    }
    bool isEven(int n){
        if(n%2==0) return true;
        return false;
    }
};