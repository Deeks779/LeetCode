class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            set<int> count;
            for(int j=0;j<n;j++){
                auto it = count.find(matrix[i][j]);
                if(it != count.end()){
                    return false;
                }else count.insert(matrix[i][j]);
            }
            if(count.size()!= n) return false;
        }
        for(int i=0;i<n;i++){
            set<int> count;
            for(int j=0;j<n;j++){
                auto it = count.find(matrix[j][i]);
                if(it != count.end()){
                    return false;
                }else count.insert(matrix[j][i]);
            }
            if(count.size()!= n) return false;
        }
        return true;
    }
};