class Solution {
public:
    int sumOfMultiples(int n) {
        int ans=0;
        // if(n<6) return ans;
        for(int i=2;i<=n;i++){
            if(i%3==0){
                ans+=i;
            }
            else if(i%5==0){
                ans+=i;
            }else if(i%7==0){
                ans+=i;
            }
        }
        return ans;
    }
};