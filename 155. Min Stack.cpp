class MinStack {
    stack <int> mainStack;
    stack <int> auxStack;
    
public:
    MinStack() {
        
        
    }
    
    void push(int val) 
    {
        
        mainStack.push(val);
        if (auxStack.empty() || mainStack.top()<=auxStack.top())
            auxStack.push(val);
    }
    
    void pop() 
    {
        
        if (mainStack.top()==auxStack.top())
            auxStack.pop();
        mainStack.pop();
    }
    
    int top() {
        int k = mainStack.top();
        
        return k;
        
    }
    
    int getMin() {
        
        
        return auxStack.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
