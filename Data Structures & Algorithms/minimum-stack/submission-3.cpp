class MinStack {
    stack<int>st,minst;
public:
    MinStack() {    
    }
    
    void push(int val) {
      st.push(val);
        if(minst.empty()|| minst.top()>=val)
        {
            minst.push(val);
        }
    }
    
    void pop() {
        int t= st.top();
        st.pop();
        if (!minst.empty() &&minst.top()==t)
        {
           minst.pop();
        }
       
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minst.top();
    }
};
