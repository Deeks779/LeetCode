class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
        // cout<<n;
        for(int i=0;i<n;i++){
            reverse(image[i].begin(),image[i].end());
            int m=image[i].size();
            for(int j=0;j<m;j++){
                image[i][j]==0?image[i][j]=1:image[i][j]=0;
            }
        }
        return image;
    }
};