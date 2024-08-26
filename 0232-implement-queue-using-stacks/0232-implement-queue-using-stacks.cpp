#include <stack>

class MyQueue {
public:
    std::stack<int> s1;
    std::stack<int> s2;

    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        // Ensure s2 has elements to pop
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        
        int data = s2.top();
        s2.pop();
        return data;
    }
    
    int peek() {
        // Ensure s2 has elements to peek
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        
        return s2.top();
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
    }
};
