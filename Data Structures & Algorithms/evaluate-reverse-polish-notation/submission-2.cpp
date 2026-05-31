class Solution {
public:
 int eval(int n1,int n2,char op)
 {
    int r;
    switch(op)
    {
        case '+':
        r= n1+n2;
         break;
        case '-':
        r= n1-n2;
         break;
        case '*':
        r= n1*n2;
         break;
        case '/':
        r= n1/n2;
         break;
        
    }
    return r;
 }
    
       int evalRPN(vector<string>& tokens) {
    stack<int> st;
    for(auto& token : tokens) {
        if(token=="+" || token=="-" || token=="*" || token=="/") {
            int n2 = st.top(); st.pop();
            int n1 = st.top(); st.pop();
            st.push(eval(n1, n2, token[0]));
        } else {
            st.push(stoi(token));
        }
    }
    return st.top();
}
};
