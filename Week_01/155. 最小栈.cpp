class MinStack {
public:
    stack<int> st;
    stack<int> minst;
    
    MinStack() {
        minst.push(INT_MAX);    
    }
    
    void push(int x) {
        st.push(x);
        minst.push(min(x,minst.top()));
    }
    
    void pop() {
        st.pop();
        minst.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minst.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */