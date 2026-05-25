class Solution {
public:
    string minWindow(string s, string t) {
       unordered_map<char,int>mp1;
       unordered_map<char,int>mp2;
    for(int i=0;i<t.length();i++)
       {
        mp1[t[i]]++;
       } 
       int l=0;
       int minl=0,minr=0;
       int  minres=10001;
       int count=t.length();
       for(int r=0;r<s.length();r++)
       {
            mp2[s[r]]++;
            if(mp1.count(s[r])&& mp2[s[r]] <= mp1[s[r]])
            {
                count--;
            }
            while (count == 0)
{
    if(r - l + 1 < minres) {
        minres = r - l + 1;
        minl = l;
        minr = r;
    }
    mp2[s[l]]--;
    if(mp1.count(s[l]) && mp2[s[l]] < mp1[s[l]])
        count++;
    l++;
}
            
       } 
       if(minres==10001)
       {
        return "";
       }
       else 
       {
       return s.substr(minl,minres);
       }
    }
};
