class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();
        queue<int> q;
        for (int i = 0; i<n; ++i) {
            q.push(students[i]);
        }
        stack<int> s;
        for (int i = n - 1; i >= 0; --i) {
            s.push(sandwiches[i]);
        }
        int c=0;
        while(!s.empty()){
            if(s.top()==q.front()){
                s.pop();
                q.pop();
                c=0;
            }else{
                int a=q.front();
                q.pop();
                q.push(a);
                c++;
            }
            if(s.size()==c) break;
        }
        return q.size();
    }
};