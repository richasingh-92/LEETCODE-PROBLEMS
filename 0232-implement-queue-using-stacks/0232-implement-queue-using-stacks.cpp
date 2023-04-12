class MyQueue {
public:
    stack<int>s;
    MyQueue() {
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        stack<int>s1;
        while(!s.empty()){
            s1.push(s.top());
            s.pop();
        }
        int tp=s1.top();
        s1.pop();
        while(!s1.empty()){
            s.push(s1.top());
            s1.pop();
        }
        return tp;
    }
    
    int peek() {
        stack<int>s1;
        while(!s.empty()){
            s1.push(s.top());
            s.pop();
        }
        int tp=s1.top();
        while(!s1.empty()){
            s.push(s1.top());
            s1.pop();
        }
        return tp;
    }
    
    bool empty() {
        return s.empty();
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