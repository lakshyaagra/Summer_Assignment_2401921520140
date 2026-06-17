class MinStack {
public:
    stack<long long>s;
    long long mini;
    MinStack() {
        mini=LLONG_MAX;
    }
    
    void push(int value) {
        long long curr=value;
        if(s.empty()) {
            s.push(curr);
            mini=curr;
        }
        else if(curr<mini){
            s.push(2LL*curr-mini);
            mini=curr;
        }
        else{
            s.push(curr);
        }
    }
    
    void pop() {
        long long curr=s.top();
        s.pop();
        if(curr<mini){
            mini=2*mini-curr;
        }
    }
    
    int top() {
        long long curr=s.top();
        if(curr<mini){
            return mini;
        }
        return curr;
    }
    
    int getMin() {
        return mini;
    }
};
