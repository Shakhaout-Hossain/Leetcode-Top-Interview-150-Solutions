class MinStack {
    public:
        stack < int > st, ms;
        MinStack() {
            
        }
        
        void push(int val) {
            if(ms.empty()||val<=ms.top()){
                ms.push(val);
            }
            st.push(val);
        }
        
        void pop() {
            if(st.top()==ms.top()){
                ms.pop();
            }
            st.pop();
        }
        
        int top() {
            return st.top();
        }
        
        int getMin() {
            return ms.top();
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