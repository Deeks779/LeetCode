class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int, int>> q;
        int n = tickets.size();
        for (int i = 0; i < n; ++i) {
            q.push({i, tickets[i]});
        }
        int time = 0;
        while (!q.empty()) {
            auto [idx, t] = q.front();
            q.pop();
            time++;
            t--; 
            if (t > 0) {
                q.push({idx, t}); 
            }
            if (idx == k && t == 0) {
                return time;
            }
        }
        return time; 
    }
};
