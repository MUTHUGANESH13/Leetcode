class MyQueue {
public:
    vector<int>a;
    MyQueue() {
        
    }
    
    void push(int x) {
        a.push_back(x);
    }
    
    int pop() {
        int x=a[0];
        a.erase(a.begin());
        return x;
    }
    
    int peek() {
        return a[0];
    }
    
    bool empty() {
        return a.size()==0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */