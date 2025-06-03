class CustomStack {
private:
    vector<int> stack;
    int* ptr;
    int c;
public:
    CustomStack(int maxSize) {
        stack.resize(maxSize);
        c=-1;
    }
    
    void push(int x) {
        if (c + 1 >= stack.size()) return;
        c++;
        stack[c]=x;
    }
    
    int pop() {
        if(c==-1) return -1;
        int a=stack[c];
        c--;
        return a;
    }
    
    void increment(int k, int val) {
        int actualSize = c + 1;
        int a = min(k, actualSize);
        for(int i=0;i<a;i++){
            stack[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */