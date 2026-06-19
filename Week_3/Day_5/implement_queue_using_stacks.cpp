class MyQueue {
    stack<int>s;
    stack<int>st;
public:
    MyQueue() {
        s={};
        st={};
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        while(s.size()!=1){
            int top=s.top();
            s.pop();
            st.push(top);
        }
        int ans=s.top();
        s.pop();
        while(!st.empty()){
            int top=st.top();
            st.pop();
            s.push(top);
        }
        return ans;
    }
    
    int peek() {
        while(s.size()!=1){
            int top=s.top();
            s.pop();
            st.push(top);
        }
        int ans=s.top();
        while(!st.empty()){
            int top=st.top();
            st.pop();
            s.push(top);
        }
        return ans;
    }
    
    bool empty() {
        return s.empty();
    }
};
