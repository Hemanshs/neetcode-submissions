class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>freq;
        int r=0;
        int l=0;
        int result=0;
        for(int r=0;r<s.length();r++)
        {
            freq[s[r]]++;
            while(freq[s[r]]>1)
            {
                freq[s[l]]--;
                if(freq[s[l]]==0)
                {
                    freq.erase(s[l]);
                }
                l++;
            }
            int t=freq.size();
            result=max(result,t);
        }
        return result;

    }
};
