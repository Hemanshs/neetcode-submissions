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
        stack<int>st;
        for(int i=0;i<tokens.size();i++)
        {
            if((tokens[i]=="+")||(tokens[i]=="-")||(tokens[i]=="/")||(tokens[i]=="*"))
            {
                int n1,n2,res;
                if(!st.empty()){
                    n2=st.top();
                    st.pop();
                }
                if(!st.empty()){
                    n1=st.top();
                    st.pop();
                }
                char v=tokens[i][0];
                st.push(eval(n1,n2,v));
            }
            else
            {
                st.push(stoi(tokens[i]));
            }
        }
        if(!st.empty())
        {
        return st.top();
        }
    }
};
