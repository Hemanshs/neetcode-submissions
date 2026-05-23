class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int l=0;
        int result=0;
        int n=prices.size();
        for(int r=0;r<n;r++)
        {
            while(prices[r]<prices[l])
            {
                l++;
            }
            result=max(result,prices[r]-prices[l]);
        }
        return result;
    }
};
