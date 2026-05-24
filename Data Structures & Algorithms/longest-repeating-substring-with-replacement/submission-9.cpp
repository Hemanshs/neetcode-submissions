class Solution {
public:
    int characterReplacement(string str, int k) {
        unordered_map<char,int>mp;
    
    // to store length of string
    int n = str.length();
    
    // to store answer 
    char ans;
    
    // to check count of answer character is less or greater
    // than another elements count
    int cnt=0;
    int l=0,res=0;
    int maxFreq=0;
    // traverse the string 
    for(int r=0 ;r<n ; r++){
        // push element into map and increase its frequency 
        mp[str[r]]++;
        
        // update answer and count
         maxFreq = max(maxFreq, mp[str[r]]); 
        
        while(r-l+1-maxFreq >k)
        {
            mp[str[l]]--;
            l++;
        }
        res=max(res,r-l+1);
        
    }
    return res;

    
    }
};
