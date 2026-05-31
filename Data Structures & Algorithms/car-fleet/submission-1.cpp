class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        unordered_map<int,int> t;
        stack<float>st;
        for(int i=0; i<position.size();i++)
        {
            t[position[i]]=speed[i];
        }
        sort(position.begin(), position.end(),greater<int>());
       
        for(int i=0; i<position.size();i++)
        {
            float y=float(target-position[i])/t[position[i]];
            if(st.empty()||y>st.top())
            {
                st.push(y);
            }

        }
        return st.size();
    }
};
