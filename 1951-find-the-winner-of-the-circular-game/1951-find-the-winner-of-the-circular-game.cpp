class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;
        for (int i = 1; i <= n; ++i) {
            q.push(i);
        }
        while(q.size()>1){
            for(int i=1;i<k;i++){
                int a=q.front();
                q.pop();
                q.push(a);
            }
            q.pop();
        }
        return q.front();
    }
};