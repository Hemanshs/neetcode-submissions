class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
    
        int l=1, r=*max_element(piles.begin(), piles.end()), res=INT_MAX,mid=0;
    
            while (l<=r)
            {
            mid=l+(r-l)/2;
            int sum=0;
            for (int j=0;j<piles.size();j++)
            {
                 sum+=(piles[j] + mid - 1) /mid;
            }    
            if(sum<=h)
            {
                res=min(res,mid);
                r=mid-1;
            }
            else if(sum>h)
            {
                l=mid+1;
            }
            }
            
        
        return res;
    }
};
