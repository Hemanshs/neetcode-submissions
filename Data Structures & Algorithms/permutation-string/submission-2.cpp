class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map <char,int>mp1;
        unordered_map<char,int> mp2;
        for(int i=0;i<s1.length();i++)
        {
            mp1[s1[i]]++;
        }
        int l=0,count=s1.length();
        for(int r=0;r<s2.length();r++)
        {
            mp2[s2[r]]++;
            
            while(r-l+1>s1.length())
            {
                mp2[s2[l]]--;
                if(mp2[s2[l]]==0)
                {
                    mp2.erase(s2[l]);
                }
                l++;
            }
            if(mp2==mp1)
            {
                return true;
            }

        }
        return false;

    }
};
