class MyQueue {
    ArrayList<Integer>a;
    public MyQueue() {
        a=new ArrayList<>();
    }
    
    public void push(int x) {
        a.add(x);
    }
    
    public int pop() {
        int x=a.get(0);
        a.remove(0);
        return x;
    }
    
    public int peek() {
        return a.get(0);
    }
    
    public boolean empty() {
        return a.size()==0;
    }
}

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * boolean param_4 = obj.empty();
 */