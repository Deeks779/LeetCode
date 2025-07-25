class MyQueue {
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        if(s.empty()) s.push(x);
        else{
            vector<int> store;
            // int i=0;
            while(!s.empty()){
                store.push_back(s.top());
                s.pop();
            }
            s.push(x);
            for(int i=store.size()-1;i>=0;i--){
                s.push(store[i]);
            }
        }
    }
    
    int pop() {
        int a=s.top();
        s.pop();
        return a;
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
        // cout<<s.top();
        return s.empty();
    }
private:
    stack<int> s;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */