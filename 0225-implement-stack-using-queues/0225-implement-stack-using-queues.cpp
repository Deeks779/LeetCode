class MyStack {
public:
    MyStack() {
    }
    
    void push(int x) {
        if(q.empty()) q.push(x);
        else{
            vector<int> store;
            while(!q.empty()){
                store.push_back(q.front());
                q.pop();
            }
            q.push(x);
            for(int i=0;i<store.size();i++){
                q.push(store[i]);
            }
        }
    }
    
    int pop() {
        int a=q.front();
        q.pop();
        return a;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
private:
    queue<int> q;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */