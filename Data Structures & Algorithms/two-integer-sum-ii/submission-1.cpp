class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int len=numbers.size();
        int l=0;
        while(l<len)
        {
            int r=l+1;
            while(r<len)
            {
                if(numbers[l]+numbers[r]==target)
                {
                    result.push_back(l+1);
                    result.push_back(r+1);
                    break;
                }
                r++;
            }
            l++;
            
        }
        return result;
    }
};
