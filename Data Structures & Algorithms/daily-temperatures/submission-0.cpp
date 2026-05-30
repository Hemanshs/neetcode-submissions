class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int> res(temperatures.size(), 0);  // fix 2: preallocate

        for(int i = 0; i < temperatures.size(); i++) {
            while(!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int prev_index = st.top();
                st.pop();                          // fix 1: pop
                res[prev_index] = i - prev_index;  // fix 2: index-based
            }
            st.push(i);
        }
        return res;
    }
};