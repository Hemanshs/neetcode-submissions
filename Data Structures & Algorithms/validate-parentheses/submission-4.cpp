class Solution {
public:
bool matches(char t, char r)
{
    if(t=='(' && r==')')
     return true;
    else if(t=='[' && r==']')
     return true;
     else if(t=='{' && r=='}')
     return true;
     else 
     return false;
}
    bool isValid(string s) {
        stack<char> st;
        
        for(char c:s)
        {
            if(c=='('||c=='{'||c=='[')
            {
                st.push(c);

            }
            else 
            { 
                if(st.empty() || !matches(st.top(),c))
                {
                    return false;
                }
            st.pop();
            }
        }
        return st.empty();
    }
};
