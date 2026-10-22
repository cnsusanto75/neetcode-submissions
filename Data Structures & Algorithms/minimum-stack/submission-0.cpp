class MinStack {
private:
    stack<int> data;
    stack<int> min;

public:
    MinStack() {
    }
    
    void push(int val) {
        if (data.size() == 0 || val < min.top()) min.push(val);
        else min.push(min.top());
        data.push(val);
    }
    
    void pop() {
        data.pop();
        min.pop();
    }
    
    int top() {
        return data.top();
    }
    
    int getMin() {
        return min.top();
    }
};
