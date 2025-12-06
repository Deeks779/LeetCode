class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0,r=n-1,ans=0;
        while(l<r){
            int area=min(height[l],height[r])*(n-1);
            // cout<<min(height[l],height[r])<<" "<<n-1<<area<<endl;
            if(area>ans) ans=area;
            n--;
            // cout<<l<<" "<<r<<" "<<ans<<endl;
            if(height[l]<height[r]) l++;
            else r--;
        }
        return ans;
    }
};
