class MyStack {
    ArrayList<Integer>a;
    public MyStack() {
        a=new ArrayList<>();
    }
    
    public void push(int x) {
        a.add(x);
    }
    
    public int pop() {
        int x=a.get(a.size()-1);
        a.remove(a.size()-1);
        return x;
    }
    
    public int top() {
        return a.get(a.size()-1);
    }
    
    public boolean empty() {
        return a.size()==0;
    }
}

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * boolean param_4 = obj.empty();
 */