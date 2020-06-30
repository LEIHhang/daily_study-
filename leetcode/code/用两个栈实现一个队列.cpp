class CQueue {
public:
    CQueue() {
        while(!stack2.empty())
        {
            stack2.pop();
        }
        while(!stack1.empty())
        {
            stack1.pop();
        }
    }
    
    void appendTail(int value) {
        stack1.push(value);
    }
    
    int deleteHead() {
        if(stack2.empty())
        {
            while(!stack1.empty())
            {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        if(stack2.empty())
        {
            return -1;
        }
        else
        {
            int val = stack2.top();
            stack2.pop();
            return val;
        }
    }
private:
    stack<int> stack1,stack2;
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */