class MyStack {
public:
    vector<int>a;
    MyStack() {
        
    }
    
    void push(int x) {
        a.push_back(x);
    }
    
    int pop() {
        int x=a.back();
        a.pop_back();
        return x;
    }
    
    int top() {
        return a.back();
    }
    
    bool empty() {
        return a.size()==0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */